# Soil-Moisture-Sensor

STM32 Soil Moisture Sensor

## Author : Cojocaru Bogdan

Description:

Detection of moisture in the soil using a sensor and a microcontroller unit.

Components used:

- STM32F334 MCU;
- 5 mother-to-mother cables;
- YL-69 Soil Moisture Sensor(2 pieces: electronic board and the probe with two pads, that detecs the water content), used in digital output mode.

How does it work?

When the soil is:

- wet: the voltage is set on low level;
- dry: the voltage is set on high level.

Connections:

- I used GPIO from the MCU to connect the electronic board as follows:
	- 5V_O (STM32) -> Pin 1 (VCC);
	- GND (STM32) -> Pin 2 (GND);
	- PB2 (STM32)-> Pin 3 (DO);
- The connection between the electronic board and the probe is made with 2 cables;
- The STM32 board is powered through a USB-MiniUSB cable.

Schematics: [Photo](https://imgur.com/xDjpqQL)  
  
Software:
  
We enable GPIO clock and set the corresponding ports.

The software checks for the input on the pin PB2 and the related register.

By default the red and blue LEDs are powered on and when the sensor detects moisture, the green and orange LEDs are powered on.


  
Programming language used: C.

