# Regador Autónomo

Proyecto open source de la implementación de un regador autónomo para una huerta casera



## Hardware

**Insumos necesarios:**

| Materiales                                             |                           Imagenes                           |
| ------------------------------------------------------ | :----------------------------------------------------------: |
| Arduino Uno                                            | <img src="imagenes/arduinoUNO.png" alt="arduinoUNO" style="zoom:60%;" /> |
| Sensor de Humedad                                      | <img src="imagenes/SoilHumiditySensor.png" alt="SoilHumiditySensor" style="zoom:20%;" /> |
| Bomba de Agua                                          | <img src="imagenes/MiniBomba.png" alt="MiniBomba" style="zoom:15%;" /> |
| Mangera para Bomba                                     | <img src="imagenes/Manguera.png" alt="Manguera" style="zoom:50%;" /> |
| Transistor (Recomendado: TIP122)                       | <img src="imagenes/TIP122.png" alt="TIP122" style="zoom:40%;" /> |
| Cable USB y adaptador (output 5V)                      | <img src="imagenes/WallAdapter.png" alt="WallAdapter" style="zoom:15%;" /> |
| Recipiente para Agua                                   | <img src="imagenes/BotellaDeAgua.png" alt="BotellaDeAgua" style="zoom:15%;" /> |
| Resistencia (Suerior a 110 ohms, recomendada 220 ohms) | <img src="imagenes/220Resistor.png" alt="220Resistor" style="zoom:25%;" /> |

A tener en cuenta al momento de conseguir los materiales es intentar usar en su mayoría materiales reciclado como una botella de plástico u otro sustituto, un cargador antiguo de 5V con el cable averiado pitillos de goma u otras mangueras reutilizables

**Diagrama de conexiones:**

![DiagramaDeConexion](imagenes/DiagramaDeConexion.SVG)

---

## Software

Para subirle el programa a nuestro sistema deberemos tener instalado es programa Arduino en nuestra computadora, para descargarlo debemos entrar a la pagina oficial y seleccionar el sistema operativo de nuestra computadora.

[Descargar Arduino](https://www.arduino.cc/en/Main/Software)

Posteriormente deberemos abrir el código [regadorAutonomo.ino](regadorAutonomo/regadorAutonomo.ino)  y conectamos nuestro arduino 

Seleccionaremos nuestra placa arduino

![SeleccionarPlaca](imagenes/SeleccionarPlaca.png)

Seleccionaremos el puerto donde esta conectada nuestra placa

![SeleccionarPuerto](imagenes/SeleccionarPuerto.png)

Compilamos y subimos el código

![CompilarYSubir](imagenes/CompilarYSubir.png)

