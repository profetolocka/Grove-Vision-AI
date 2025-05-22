#include <Seeed_Arduino_SSCMA.h>  // Librería para comunicar con el módulo Grove Vision AI

SSCMA AI;  // Creamos un objeto para la información del modelo

void setup() {
  // Inicializamos la comunicación con el módulo Grove Vision AI por I2C
  AI.begin();

  // Inicializamos el monitor serie para ver los resultados
  Serial.begin(9600);
  delay(1000); 
}

void loop() {
  // Ejecutamos el modelo de detección de objetos cargado en el Grove Vision AI
  // Parámetros:
  //   1 → una sola inferencia
  //   false → no usar filtros
  //   false → no incluir imagen
  if (!AI.invoke(1, false, false)) {
    Serial.println("Modelo ejecutado correctamente");

    // Recorremos e imprimimos las detecciones realizadas
    for (int i = 0; i < AI.boxes().size(); i++) {
      Serial.print("Box[");
      Serial.print(i);
      Serial.print("] Clase=");
      Serial.print(AI.boxes()[i].target);  // Número de clase detectada
      Serial.print(" Confianza=");
      Serial.println(AI.boxes()[i].score); // Nivel de confianza (0.0 a 1.0)
    }

  } else {
    // Si ocurre un error al ejecutar el modelo, lo indicamos por consola
    Serial.println("Error al ejecutar el modelo");
  }

  delay(1000);  // Esperamos 1 segundo antes de hacer una nueva inferencia
}