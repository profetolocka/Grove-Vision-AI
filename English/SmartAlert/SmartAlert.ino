/**********************************************
 SMART ALERT
 
 Author: Ernesto Tolocka (profe Tolocka)
 Date: 05-31-2025
 Description: Image Recognition Alert System
 License: MIT
************************************************/

#include <WiFi.h>
#include <HTTPClient.h>
#include <Seeed_Arduino_SSCMA.h>

SSCMA AI;

const char* ssid = "yourSSID";
const char* password = "yourPassword";
const char* pushbulletToken = "yourToken";  

void setup() {

  AI.begin();              // I2C communication with Grove Vision AI

  Serial.begin(9600);

  // Connect to WiFi network
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to WiFi");

}

void loop() {
  if (!AI.invoke(1, false, false)) {
    Serial.println("Model executed successfully");

    // Loop through detections
    for (int i = 0; i < AI.boxes().size(); i++) {
      int detectedClass = AI.boxes()[i].target;
      float confidence = AI.boxes()[i].score;

      // If the detected class is a person (class 0) and confidence is above 80%
      if (detectedClass == 0 && confidence > 0.8) {
        Serial.println("Person detected!");
        triggerAlarm();
      }
    }

  } else {
    Serial.println("Error executing the model");
  }

  delay(1000); // Wait 1 second before running again
}

void triggerAlarm() {
  
  // Send notification
  HTTPClient http;
  http.begin("https://api.pushbullet.com/v2/pushes");
  http.addHeader("Content-Type", "application/json");
  http.addHeader("Access-Token", pushbulletToken);

  String payload = "{\"type\":\"note\",\"title\":\"Alarm!\",\"body\":\"Intrusion detected!\"}";
  int httpResponseCode = http.POST(payload);

  if (httpResponseCode > 0) {
    String response = http.getString();
    Serial.println("Server response:");
    Serial.println(response);
  } else {
    Serial.print("Request error: ");
    Serial.println(httpResponseCode);
  }

  http.end();
}