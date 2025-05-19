#include <Seeed_Arduino_SSCMA.h>

SSCMA AI;

void setup() {
  AI.begin();              // Comunicación I2C con Grove Vision AI
  Serial.begin(9600);      // Monitor serie
  delay(2000);
  Serial.println("Sistema iniciado");
}

void dispararAlarma (void) {
  //Aquí se podría activar un relé para hacer sonar una alarma
  Serial.println ("ALARMA!!!");
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
        dispararAlarma ();
      }
    }

  } else {
    Serial.println("Error al ejecutar el modelo");
  }

  delay(1000); // Esperamos 1 segundo antes de volver a ejecutar
}