/*
    Project name : ESP32 Keypad
    Modified Date: 24-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp32-keypad
*/

#include <Keypad.h>

const byte ROWS = 4; // Number of rows in the keypad
const byte COLS = 4; // Number of columns in the keypad

char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {5, 18, 19, 21}; // Connect to the row pinouts of the keypad
byte colPins[COLS] = {22, 23, 25, 26}; // Connect to the column pinouts of the keypad

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(115200); // Initialize serial communication
}

void loop() {
  char key = keypad.getKey(); // Read the pressed key

  if (key != NO_KEY) {
    Serial.print("Pressed Key: ");
    Serial.println(key);
    delay(100); // Small delay to debounce the keypad
  }
}
