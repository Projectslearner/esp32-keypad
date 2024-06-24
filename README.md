# ESP32 Keypad Project

## Project Overview
This project demonstrates how to interface a 4x4 matrix keypad with an ESP32 microcontroller. Keypads are widely used for input in various electronic projects, providing a convenient way to input numeric or alphanumeric data.

## Components Needed
- ESP32 Microcontroller
- 4x4 Matrix Keypad
- Jumper Wires
- Breadboard

## Block diagram


## Circuit Setup
1. **Connecting the Keypad to ESP32:**
   - Connect the row pins of the keypad (5, 18, 19, 21) to GPIO pins of the ESP32.
   - Connect the column pins of the keypad (22, 23, 25, 26) to GPIO pins of the ESP32.

## Instructions
1. **Setup:**
   - Initialize serial communication at a baud rate of 115200 in the `setup()` function.
   - Configure the keypad using the `Keypad` library, defining the keymap (`keys` array) and pin configurations (`rowPins` and `colPins`).

2. **Operation:**
   - In the `loop()` function:
     - Use `keypad.getKey()` to read the pressed key from the keypad.
     - If a key is pressed (`key != NO_KEY`), print the pressed key to the Serial Monitor.
     - Add a small delay (`delay(100)`) for debouncing the keypad.

3. **Considerations:**
   - **Debouncing:** Ensure a small delay is used to debounce the keypad and prevent multiple readings for a single key press.
   - **Customization:** Modify the `keys` array to define custom key mappings as per your project requirements.
   - **Integration:** Integrate keypad input into larger projects for user interaction and control.

## Applications
- **User Input:** Enable numeric or alphanumeric input in various applications.
- **Security Systems:** Use in keypad-based security systems for PIN input.
- **Control Systems:** Integrate with control panels for device operation and configuration.

## Notes
- **Keypad Library:** Utilize the `Keypad` library for easy interfacing with matrix keypads on the ESP32.
- **Serial Output:** Monitor keypad input in real-time using the Serial Monitor for debugging and testing.

---

## Useful Links
🌐 [ProjectsLearner - ESP32 Keypad](https://projectslearner.com/learn/esp32-keypad)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner