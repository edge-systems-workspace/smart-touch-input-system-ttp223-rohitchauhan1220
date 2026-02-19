#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223
 * @author Rohit Chauhan
 * @date YYYY-MM-DD
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
int touch_Pin=12;

 // TODO 2:

int led_Pin=13;

void setup() {

    // TODO 3:
    int state=digitalRead(touch_Pin);


    // TODO 4:
    // Configure touch pin as INPUT

    // TODO 5:
    // Print system initialization message
}

void loop() {

    // TODO 6:
    // Read digital value from touch sensor

    // TODO 7:
    // If touch detected (HIGH)
    //     Print "Touch Detected"
    // Else
    //     Print "No Touch"

    // TODO 8:
    // Add small delay (200–500ms)
}
