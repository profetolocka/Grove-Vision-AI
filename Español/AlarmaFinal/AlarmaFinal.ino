#include <WiFi.h>
#include <HTTPClient.h>
#include <Seeed_Arduino_SSCMA.h>

SSCMA AI;

const char* ssid = "tuSSID";
const char* password = "tuPassword";
const char* pushbulletToken = "tuToken";  

void setup() {

  AI.begin();              // Comunicación I2C con Grove Vision AI

  Serial.begin(9600);

  //Conecta a la red Wifi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConectado a WiFi");

}

void loop() {
  if (!AI.invoke(1, false, false)) {
    Serial.println("Modelo ejecutado correctamente");

    // Recorremos las detecciones
    for (int i = 0; i < AI.boxes().size(); i++) {
      int claseDetectada = AI.boxes()[i].target;
      float confianza = AI.boxes()[i].score;

      // Si la clase detectada es una persona (clase 0) y la confianza es mayor al 80%
      if (claseDetectada == 0 && confianza > 0.8) {
        Serial.println ("Persona detectada!");
        dispararAlarma ();
      }
    }

  } else {
    Serial.println("Error al ejecutar el modelo");
  }

  delay(1000); // Esperamos 1 segundo antes de volver a ejecutar
}

void dispararAlarma() {
  
  //Envía notificacion
  HTTPClient http;
  http.begin("https://api.pushbullet.com/v2/pushes");
  http.addHeader("Content-Type", "application/json");
  http.addHeader("Access-Token", pushbulletToken);

  String payload = "{\"type\":\"note\",\"title\":\"Alarma!\",\"body\":\"Intrusión detectada!\"}";
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
