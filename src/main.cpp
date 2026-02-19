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

    if(state==0){
        digitalWrite(13,HIGH);
        Serial.println("DETECTED!!");}

    else{
        digitalWrite(13,LOW);
        Serial.println("NOT DETECTED!!");
    }


}
