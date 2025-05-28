# Grove Vision AI – Ejemplos prácticos con SenseCraft

Este repositorio contiene una serie de proyectos y ejemplos prácticos desarrollados con el módulo **Grove Vision AI V2** de Seeed Studio y la plataforma **SenseCraft**.

Los ejemplos fueron creados con fines educativos y están pensados para introducir a estudiantes y entusiastas en el uso de la visión artificial en dispositivos embebidos, sin necesidad de conocimientos previos en inteligencia artificial.

---

## 🔍 ¿Qué es el Grove Vision AI V2?

El **Grove Vision AI V2** es un módulo de cámara con capacidades de inferencia en el borde (edge computing), basado en un procesador ARM Cortex-M55 y una unidad de procesamiento neuronal Ethos-U55. Permite ejecutar modelos de reconocimiento de imágenes directamente en el dispositivo, sin necesidad de enviar datos a la nube.

Para facilitar su uso, Seeed Studio ofrece **SenseCraft**, una plataforma que permite entrenar modelos personalizados con imágenes y cargarlos fácilmente al módulo.

---

## 📁 Contenido del repositorio

| Carpeta        | Descripción |
|----------------|-------------|
| `AlarmaFinal`  | Proyecto completo de alarma silenciosa: detecta personas y envía una notificación usando Pushbullet. |
| `Demo1`        | Primer prueba de concepto con detección de personas. Ideal para familiarizarse con SenseCraft y el módulo. |
| `Person1` y `Person2` | Modelos entrenados para reconocimiento específico de personas. Se pueden usar para validar usuarios habilitados. |
| `Pushbullet`   | Código de prueba para enviar notificaciones desde el ESP32-C3 mediante la API de Pushbullet. |

---

## ⚙️ Requisitos

- Módulo **Grove Vision AI V2**
- Placa **XIAO ESP32-C3**
- Cuenta en [SenseCraft](https://sensecraft.seeed.cc/)
- Cuenta en [Pushbullet](https://www.pushbullet.com/) (opcional, para recibir notificaciones)
- Arduino IDE (configurado para placas ESP32)

---

## 🚀 Cómo empezar

1. Entrená tu modelo en SenseCraft o usá uno de los incluidos en este repo.
2. Conectá el módulo Grove Vision AI V2 al XIAO ESP32-C3.
3. Cargá el código correspondiente desde Arduino IDE.
4. Abrí el monitor serie para ver los resultados de la detección.
5. (Opcional) Configurá tu token de Pushbullet para recibir alertas.

---

## 🧠 Aplicaciones educativas

- Sistemas de seguridad y alarmas
- Control de acceso con reconocimiento de usuarios
- Activación de dispositivos por presencia
- Proyectos escolares con inteligencia artificial embebida

---

## 📜 Licencia

Este proyecto se publica bajo la licencia [MIT](LICENSE).

---

## ✍️ Autor

Creado por [Ernesto Tolocka](https://www.profetolocka.com.ar) – Profesor de electrónica, programación e IoT.

¡Encontrá más proyectos y tutoriales en el blog!

