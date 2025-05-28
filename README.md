[Go to English version](#english-version)

# Grove Vision AI – Ejemplos prácticos con SenseCraft

Este repositorio contiene una serie de proyectos y ejemplos prácticos desarrollados con el módulo **Grove Vision AI V2** de Seeed Studio y la plataforma **SenseCraft**.

Los ejemplos fueron creados con fines educativos y están pensados para introducir a estudiantes y entusiastas en el uso de la visión artificial en dispositivos embebidos, sin necesidad de conocimientos previos en inteligencia artificial.

---

## 📂 Contenido

El repositorio está organizado en dos carpetas, `Español` y `English`, organizando el contenido en esos dos idiomas. Dentro de ellas se encuentran subcarpetas, cada una de las cuales contiene un proyecto o ejemplo diferente, con su correspondiente archivo README explicativo.

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

---

# English version

This repository contains a series of projects and practical examples developed using the **Grove Vision AI V2** module from Seeed Studio and the **SenseCraft** platform.

The examples were created for educational purposes and are intended to introduce students and enthusiasts to the use of computer vision on embedded devices, without requiring prior knowledge of artificial intelligence.

---

## 📂 Content

The repository is organized into two folders, `Español` and `English`, structuring the content in both languages. Inside each, you'll find subfolders, each containing a different project or example, along with its corresponding explanatory README file.

---

## 🔍 What is Grove Vision AI V2?

The **Grove Vision AI V2** is a camera module with edge inference capabilities, based on an ARM Cortex-M55 processor and an Ethos-U55 neural processing unit. It allows image recognition models to run directly on the device, without the need to send data to the cloud.

To simplify its use, Seeed Studio offers **SenseCraft**, a platform that lets you train custom models with images and easily upload them to the module.

---

## 📁 Repository contents

| Folder         | Description |
|----------------|-------------|
| `AlarmaFinal`  | Full silent alarm project: detects people and sends a notification using Pushbullet. |
| `Demo1`        | First proof of concept with person detection. Great for getting started with SenseCraft and the module. |
| `Person1` and `Person2` | Models trained for specific person recognition. Useful for validating authorized users. |
| `Pushbullet`   | Test code for sending notifications from the ESP32-C3 using the Pushbullet API. |

---

## ⚙️ Requirements

- **Grove Vision AI V2** module  
- **XIAO ESP32-C3** board  
- Account on [SenseCraft](https://sensecraft.seeed.cc/)  
- Account on [Pushbullet](https://www.pushbullet.com/) (optional, for receiving notifications)  
- Arduino IDE (configured for ESP32 boards)

---

## 🚀 Getting started

1. Train your model on SenseCraft or use one of the models included in this repo.  
2. Connect the Grove Vision AI V2 module to the XIAO ESP32-C3.  
3. Upload the corresponding code from the Arduino IDE.  
4. Open the serial monitor to view detection results.  
5. (Optional) Configure your Pushbullet token to receive alerts.

---

## 🧠 Educational applications

- Security and alarm systems  
- Access control with user recognition  
- Device activation by presence  
- School projects using embedded AI

---

## 📜 License

This project is published under the [MIT](LICENSE) license.

---

## ✍️ Author

Created by [Ernesto Tolocka](https://www.profetolocka.com.ar) – Electronics, programming, and IoT teacher.

Find more projects and tutorials on the blog!


