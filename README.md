# Solar-Tracking-System

## 📌 Project Overview
The **Automatic Single-Axis Solar Tracker** is a microcontroller-based system designed to maximize solar energy capture by dynamically adjusting the orientation of a solar panel throughout the day. Utilizing an Arduino Uno SMD, Light Dependent Resistors (LDRs), a servo motor, and a TP4056 charging module, this system enhances solar panel efficiency by tracking the sun’s movement from east to west.

---

## 🌟 Features
- **Real-Time Solar Tracking:** Adjusts the panel angle automatically based on sunlight intensity.
- **Microcontroller-Based Control:** Uses Arduino Uno SMD for processing sensor data and controlling the servo motor.
- **Power Management:** Efficient charging with a TP4056 module and 18650 lithium batteries.
- **Compact & Low-Cost Design:** Built with affordable components for educational and practical use.
- **Bluetooth Integration (Optional):** Allows manual adjustments via an Android application.

---

## 📜 Table of Contents
1. [Introduction](#introduction)
2. [Components](#components)
3. [Circuit Diagram](#circuit-diagram)
4. [Working Principle](#working-principle)
5. [Software Implementation](#software-implementation)
6. [Testing & Results](#testing--results)
7. [Advantages & Limitations](#advantages--limitations)
8. [Future Enhancements](#future-enhancements)
9. [Installation & Usage](#installation--usage)
10. [Contributors](#contributors)
11. [License](#license)

---

## 🔎 Introduction
Solar power efficiency is heavily influenced by the orientation of panels towards the sun. Fixed panels suffer from suboptimal exposure, reducing energy output. This project addresses this limitation by implementing a **single-axis solar tracker**, which increases power generation by up to 30% compared to fixed panels.

---

## 🔩 Components
| Component               | Description                             |
|-------------------------|-----------------------------------------|
| **Arduino Uno SMD**    | Microcontroller for processing data    |
| **SG90 Servo Motor**   | Rotates the solar panel                |
| **LDR Sensors**        | Detects sunlight intensity             |
| **TP4056 Module**      | Manages battery charging               |
| **18650 Batteries**    | Provides power storage                 |
| **10K Resistors**      | Used in the LDR voltage divider circuit |
| **MDF Board & Stand**  | Structural support for mounting        |

---

## 🔧 Circuit Diagram
The project follows a simple **sensor-to-controller-to-actuator** approach:
- LDR sensors detect sunlight direction.
- Arduino processes sensor input and controls the servo motor.
- The solar panel rotates accordingly to maximize sunlight exposure.
- The TP4056 module ensures battery safety and proper charging.

_A detailed circuit diagram is included in the repository._

---

## ⚙️ Working Principle
1. **Sunlight Detection:** LDR sensors measure light intensity.
2. **Signal Processing:** Arduino compares sensor values.
3. **Motor Adjustment:** If light imbalance is detected, the servo motor adjusts the panel’s position.
4. **Feedback Loop:** Continuous monitoring ensures optimal solar exposure.

---

## 💻 Software Implementation
- **Programming Language:** C++ (Arduino IDE)
- **Libraries Used:** `Servo.h`
- **Key Functions:**
  - Read LDR values.
  - Compute angle adjustments.
  - Control servo movements.
  - Optional Bluetooth integration.

_Code is available in the repository._

---

## 🔬 Testing & Results
- **Performance Analysis:**
  - Achieved ~25% higher energy output vs. fixed panels.
  - Successfully tracked the sun across various weather conditions.
- **Challenges & Fixes:**
  - Servo jitter minimized by refining movement logic.
  - Optimized battery usage by reducing unnecessary adjustments.

---

## ✅ Advantages & Limitations
### Advantages
✔ Improved solar panel efficiency (20-30%)
✔ Low-cost & easy to implement
✔ Can be used for small-scale renewable energy projects

### Limitations
❌ Limited to a **single-axis** (east-west tracking only)
❌ Dependent on **sunlight availability**
❌ Requires occasional recalibration

---

## 🚀 Future Enhancements
- **Dual-Axis Tracking** for seasonal adjustments
- **IoT Integration** for remote monitoring
- **Machine Learning Algorithms** for predictive tracking
- **Weatherproofing** to enhance durability

---

## 📖 Installation & Usage
1. Clone this repository:
   ```bash
   git clone https://github.com/yourusername/Automatic-Single-Axis-Solar-Tracker.git
   ```
2. Upload the Arduino code to the microcontroller.
3. Assemble components as per the circuit diagram.
4. Power the system using the 18650 batteries.
5. Observe real-time solar tracking!

---

## 👥 Contributors
- **[Your Name]** – Developer & Researcher
- **[Collaborator Name]** – Hardware Design

_We welcome contributions! Feel free to submit pull requests._

---

## 📜 License
This project is licensed under the **MIT License**. Feel free to use, modify, and distribute it for educational or research purposes.

---

### ⭐ If you like this project, please consider giving it a **star ⭐** on GitHub!

---

