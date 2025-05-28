#include <WiFi.h>
#include <HTTPClient.h>

const char* ssid = "SSID";
const char* password = "pass";
const char* pushbulletToken = "token"; 

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConectado a WiFi");

  sendPushbulletNotification();
}

void loop() {
  // Nada en el loop por ahora
}

void sendPushbulletNotification() {
  HTTPClient http;
  http.begin("https://api.pushbullet.com/v2/pushes");
  http.addHeader("Content-Type", "application/json");
  http.addHeader("Access-Token", pushbulletToken);

  String payload = "{\"type\":\"note\",\"title\":\"Prueba desde XIAO C3\",\"body\":\"Hola mundo!\"}";
  int httpResponseCode = http.POST(payload);

  if (httpResponseCode > 0) {
    String response = http.getString();
    Serial.println("Respuesta del servidor:");
    Serial.println(response);
  } else {
    Serial.print("Error en la solicitud: ");
    Serial.println(httpResponseCode);
  }

  http.end();
}
