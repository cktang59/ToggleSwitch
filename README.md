# Toggle Switch Control (Arduino)

A simple Arduino project that uses a pushbutton as a toggle switch to turn an LED on and off with each press.

---

## 🛠 Hardware Components

* **1x** Arduino UNO R3
* **1x** Pushbutton Switch
* **1x** Breadboard
* Jumper Wires & USB Cable

---

## 🔌 Pin Connections

Based on `ToggleSwitch.ino` and the hardware setup:

| Component | Pin / Connection | Arduino Pin |
| :--- | :--- | :--- |
| **Pushbutton** | Signal Pin | `Digital Pin 2` |
| **Pushbutton** | Ground | `GND` |
| **LED** | Anode (+) | `Digital Pin 13` |

---

## ⚙️ How the Code Works

* **Internal Pull-Up:** `pinMode(buttonPin, INPUT_PULLUP)` uses Arduino's internal pull-up resistor, keeping Pin 2 `HIGH` (1) when unpressed and pulling it `LOW` (0) when pressed.
* **Toggle Logic:** When a button press is detected (`buttonNew == 0`), the code flips the `ledstate` variable (`0` to `1` or `1` to `0`) and updates the LED.
* **Debounce Delay:** A `delay(500)` is included to prevent multiple accidental triggers from a single press.

---

## 🚀 How to Run

1. **Clone the Repository:**
   ```bash
   git clone [https://github.com/cktang59/ToggleSwitch.git](https://github.com/cktang59/ToggleSwitch.git)
