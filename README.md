# AVR Traffic Light Control System

This repository contains the firmware and simulation files for an intelligent Traffic Light Control System, developed using Embedded C for AVR microcontrollers.

This project demonstrates low-level hardware programming, interrupt handling, and the implementation of Finite State Machines (FSM) for reliable system control.

## Key Features

* **Finite State Machine (FSM):** The core logic is built on a robust FSM architecture to manage different traffic states (Red, Yellow, Green) efficiently.
* **Hardware-Oriented Programming:** Direct register manipulation and low-level control of the AVR microcontroller (e.g., ATmega32).
* **Interrupt Driven:** Utilizes interrupts for precise timing and sensor inputs (if applicable to your specific code).
* **Simulation Ready:** Includes a Proteus simulation file for validating the firmware logic before hardware deployment.

## Technologies Used

* **Language:** Embedded C
* **Hardware Platform:** AVR Microcontroller Family (e.g., ATmega32)
* **IDE/Toolchain:** Microchip Studio (Atmel Studio) / AVR-GCC
* **Simulation:** Proteus Design Suite

## How it Works

The system cycles through predefined states based on timing logic implemented via timers and ISRs (Interrupt Service Routines). The FSM ensures smooth transitions between states and prevents invalid configurations.

## Getting Started

1.  **Firmware:** The source code is located in the `src` directory (adjust path if necessary). Open the project file in Microchip Studio to compile.
2.  **Simulation:** Open the `.pdsprj` file in Proteus. Ensure the compiled `.hex` file is loaded into the microcontroller component within the simulation to see the system in action.

---
*This project was developed to demonstrate proficiency in embedded systems and low-level C programming.*

# 🚦 AVR Traffic Light Controller (FSM)

## Description
Dieses Projekt implementiert eine intelligente Ampelsteuerung
für einen AVR-Mikrocontroller in Embedded C.
Die Steuerlogik basiert auf einer Finite-State-Machine (FSM).

## Features
- FSM-basierte Zustandssteuerung
- Modulare Code-Struktur
- Erweiterbar für Interrupts und Timer

## Technologies
- Embedded C
- AVR Mikrocontroller
- Atmel Studio / AVR-GCC
- Proteus (optional)

## Project Structure

![ce00c60e-a7a4-4126-83a1-ddb4ff6806a6](https://github.com/user-attachments/assets/5ee538aa-cf9a-4ba0-ae71-426e78fd3036)

## Usage
1. Projekt in Atmel Studio oder andere AVR IDE öffnen  
2. Kompilieren und auf Mikrocontroller hochladen  
3. LED-Sequenz beobachten
   
## Author
Elham Shahriari – Junior Embedded Software Developer
