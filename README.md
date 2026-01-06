# Arduino Smart Obstacle Detection System 🚗

## 📌 Project Overview
This project is an Arduino-based obstacle detection system designed as part of my TY BSc IT project. It uses an ultrasonic sensor to measure distance and an RGB LED to indicate obstacle proximity.

- Green LED → Safe distance
- Red LED → Obstacle detected (less than 20 cm)

The project was simulated and tested using Tinkercad before hardware implementation.

---

## 🛠 Components Used
- Arduino Uno
- Ultrasonic Sensor (HC-SR04)
- RGB LED
- Resistors
- Jumper Wires

---

## ⚙️ How It Works
1. The ultrasonic sensor sends a sound pulse.
2. The echo pin receives the reflected signal.
3. Distance is calculated using time delay.
4. If distance < 20 cm → Red LED turns ON.
5. If distance ≥ 20 cm → Green LED turns ON.

---

## 💻 Technologies Used
- Arduino IDE (C/C++)
- Embedded Systems
- Tinkercad (Simulation)

---

## 📂 Project Structure
---

## 🖼 Project Screenshots

### Circuit Diagram
![Circuit](images/circuit.png)

### Obstacle Detected (Red LED)
![Red LED](images/red_led.png)

### Safe Distance (Green LED)
![Green LED](images/green_led.png)

### Serial Monitor Output
![Serial Monitor](images/serial_monitor.png)

---

## 🚀 Future Enhancements
- Add motor control for automatic stopping
- Integrate buzzer alerts
- Implement full smart car movement logic

---

## 📫 Author
*Kenn James Furtado*  
- GitHub: https://github.com/Kennfurtado
- LinkedIn: https://www.linkedin.com/in/kenn-furtado
