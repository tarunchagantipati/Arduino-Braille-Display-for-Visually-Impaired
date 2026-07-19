# Arduino-Braille-Display-for-Visually-Impaired

A low-cost refreshable Braille display that converts text stored in an SD card into tactile Braille characters using six push-pull solenoids controlled by an Arduino Uno. The system provides an affordable learning platform for visually impaired users.

## ✨ Key Features

- 📖 Reads text directly from an SD card.
- ⠿ Converts English characters into 6-dot Braille patterns.
- ⚡ Controls six push-pull solenoids using relay modules.
- 🔄 Generates a refreshable single-cell Braille display.
- 💾 Uses SPI communication for SD card interfacing.
- 🔌 Designed using low-cost and easily available hardware components.
- 🛠️ Easy to modify, extend, and customize for future enhancements.

## Hardware Components

### Arduino UNO
The main controller that executes the Braille translation algorithm.

### SD Card Module
Reads text files stored on the SD card using SPI communication.

### Relay Modules
Switch the 12V power required for the solenoids.

### Push-Pull Solenoids
Produce tactile Braille dots by mechanical movement.

### LM2596 Buck Converter
Provides a regulated 5V power supply.

### Power Supply
12V DC adapter for driving the solenoids.

### Breadboard & Jumper Wires
Used for circuit prototyping and interconnections.


## 💻 Software Used

- Arduino IDE
- SPI Library
- SD Library

