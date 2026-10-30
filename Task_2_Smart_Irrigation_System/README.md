# Task 2 – Sensor-Based Simulation

## Arduino-Based Automatic Plant Watering and Soil Moisture Monitoring System

### CodeAlpha – Internet of Things (IoT) Internship

**Intern Name:** Shivanand M Agasimani  
**Registration Number:** CA/DF1/307476  
**Organization:** CodeAlpha  
**Domain:** Internet of Things (IoT)  
**Batch:** October 2026  
**Internship Duration:** 1 October 2026 – 30 October 2026

---

## 1. Project Overview

The Smart Irrigation System is an Arduino-based automation project designed to monitor soil moisture and control a water pump according to the moisture level.

The system uses a soil moisture sensor to detect soil conditions. Arduino Uno processes the sensor readings and displays the moisture value and motor status on a 16×2 LCD.

## 2. Objectives

- Monitor soil moisture levels using a sensor.
- Automate motor or water pump operation.
- Display real-time moisture readings.
- Understand sensor interfacing and Arduino programming.
- Demonstrate IoT-based agricultural automation through simulation.

## 3. Components Used

- Arduino Uno
- Soil Moisture Sensor
- 16×2 LCD Display
- Potentiometer
- Motor/Pump
- LED
- Resistors
- Breadboard
- Jumper Wires
- Motor Driver or Switching Circuit

## 4. Technologies Used

- Arduino Programming (C/C++)
- Tinkercad Circuits
- Analog Sensor Interfacing
- LCD Interfacing
- Sensor-Based Automation

## 5. Arduino Pin Configuration

| Component | Arduino Pin |
|---|---|
| Soil Moisture Sensor | A0 |
| Motor Control | D8 |
| LED | D13 |
| LCD RS | D12 |
| LCD Enable | D11 |
| LCD D4 | D5 |
| LCD D5 | D4 |
| LCD D6 | D3 |
| LCD D7 | D2 |

## 6. Working Principle

1. The soil moisture sensor measures the moisture level in the soil.
2. The sensor sends an analog signal to Arduino pin A0.
3. Arduino reads the sensor value and compares it with a predefined threshold of 500.
4. If the reading is 500 or below, the system considers the soil dry and switches the motor ON.
5. If the reading is above 500, the system considers the soil wet and switches the motor OFF.
6. The LCD displays the moisture reading and motor status.

## 7. Simulation Results

The project is simulated using Tinkercad Circuits.

**Observed test results:**

| Test | Moisture Reading | Motor Status |
|---|---:|---|
| Test 1 | 0 | ON |
| Test 2 | 52 | ON |
| Test 3 | 516 | OFF (Observed) |


## 8. Project Files

- `Smart_Irrigation_Arduino_Code.ino` – Arduino source code.
- `Smart_Irrigation_Circuit_Diagram.png` – Circuit diagram.
- `Simulation_Screenshots/` – Tinkercad simulation screenshots.

## 9. Learning Outcomes

Through this project, I gained practical knowledge of:

- Arduino programming.
- Soil moisture sensor interfacing.
- LCD interfacing.
- Analog input processing.
- Automatic motor control.
- Circuit design and simulation.
- Sensor-based automation.

## 10. Conclusion

The project demonstrates a basic automatic irrigation system using Arduino and a soil moisture sensor. It illustrates how sensor-based automation can monitor soil conditions and control water pumping according to predefined moisture levels.

This project helped strengthen my understanding of embedded systems, sensor interfacing and smart agriculture applications.

---

**Internship:** CodeAlpha – October 2026  
**Domain:** Internet of Things (IoT)

#CodeAlpha #IoT #Arduino #SmartIrrigation #Tinkercad