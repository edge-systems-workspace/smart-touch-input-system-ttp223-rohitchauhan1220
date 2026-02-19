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

int touch_Pin=12;
int led_Pin=13;

void setup() {

    Serial.begin(9600);
    pinMode(touch_Pin,INPUT);
    pinMode(led_Pin,OUTPUT);
    }

void loop() {
    int state=digitalRead(touch_Pin);


    // TODO 7:
    // If touch detected (HIGH)
    //     Print "Touch Detected"
    // Else
    //     Print "No Touch"

    // TODO 8:
    // Add small delay (200–500ms)
}
