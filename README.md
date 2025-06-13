# Smart Lab Automation using ESP32
---

# Overview
The project, implemented at D-Lab, IIT, Jahangirnagar University, aims to design and develop a smart lab automation system using an ESP32 microcontroller. The system enables users to control appliances through multiple input methods, including:

# Features
    • IoT platform (Blynk) for remote access and control.
    • IR remote for local wireless control.
    • Manual switches for direct physical interaction.
    • PIR sensor to automate the operation based on motion detection.
    • DHT 11 sensor to monitor temperature and humidity.
    • Relay for controlling AC load.

# Major Components
    • ESP32 Dev Board (38-pin)
    • 4-Channel Relay Module
    • 1.3 Inch OLED Display
    • PIR Sensor Module
    • TSOP1838 IR Receiver
    • IR Remote Control

# Circuit Schemetics
![Diagram](https://github.com/mahebialom/IoT-Based-Smart-Lab-Automation-with-ESP32-Project-EDGE-JU-IOT-Robotics-B12/blob/2eb07e9ab9f55651231d492d0e8aaad90cd3c629/Schematic_Diagram.png)

# Usage Instructions
##### - First install all the libraries in arduino IDE before uploading the program in esp32.

> Dont use Adafruit_SSD1306 library as 1.3 inch oled doesnt sopport it. in stead of it use Adafruit_SH1106 librarry.otherwise you can use Adafruit_SSD1306

##### - Construct the circuit according to the scemetic and upload the program.
>Please ensure the relay are not powered up ,otherwise the load contatntly cghanging state while uploading

# Safety Information 
* The project use high AC voltage which may lead unexpected accident. please be careful while working.