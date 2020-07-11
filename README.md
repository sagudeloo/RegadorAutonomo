# Regador Autonomo

Proyecto open source de la implementación de un regador autónomo para una huerta casera



## Hardware

**Insumos necesarios:**

| Materiales                                             |                           Imagenes                           |
| ------------------------------------------------------ | :----------------------------------------------------------: |
| Arduino Uno                                            |   <img src="imagenes\arduinoUNO.png" style="zoom:60%;" />    |
| Sensor de Humedad                                      | <img src="imagenes\SoilHumiditySensor.png" style="zoom:20%;" /> |
| Bomba de Agua                                          |    <img src="imagenes\MiniBomba.png" style="zoom:15%;" />    |
| Mangera para Bomba                                     |    <img src="imagenes\Manguera.png" style="zoom:50%;" />     |
| Transistor (Recomendado: TIP122)                       |     <img src="imagenes\TIP122.png" style="zoom:40%;" />      |
| Cable USB y adaptador (output 5V)                      | <img src="C:\Users\sagud\Projects\regadorAutonomo\imagenes\WallAdapter.png" style="zoom:15%;" /> |
| Recipiente para Agua                                   |  <img src="imagenes\BotellaDeAgua.png" style="zoom:15%;" />  |
| Resistencia (Suerior a 110 ohms, recomendada 220 ohms) | <img src="C:\Users\sagud\Projects\regadorAutonomo\imagenes\220Resistor.png" style="zoom:25%;" /> |

A tener en cuenta al momento de conseguir los materiales es intentar usar en su mayoría materiales reciclado como una botella de plástico u otro sustituto, un cargador antiguo de 5V con el cable averiado pitillos de goma u otras mangueras reutilizables

**Diagrama de conexiones:**

![](C:\Users\sagud\Projects\regadorAutonomo\imagenes\DiagramaDeConexion.SVG)



---

## Software

Para subirle el programa a nuestro sistema deberemos tener instalado es programa Arduino en nuestra computadora, para descargarlo debemos entrar a la pagina oficial y seleccionar el sistema operativo de nuestra computadora.

[Descargar Arduino](https://www.arduino.cc/en/Main/Software)

Posteriormente deberemos abrir el codigo [RegadorAutonomo.ino](regadorAutonomo\regadorAutonomo.ino)



Seleccionaremos nuestra placa arduino



Compilamos y subimos el codigo