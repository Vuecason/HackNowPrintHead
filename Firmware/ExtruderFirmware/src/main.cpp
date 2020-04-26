/**
 * Author: Dival Banerjee
 */

//Pins
#define PIN_ENABLE_A
#define PIN_ENABLE_B
#define PIN_IN_1
#define PIN_IN_2
#define PIN_IN_3
#define PIN_IN_4
#define PIN_ENCODER_A
#define PIN_ENCODER_B

#define MIN_SPEED_PWM
#define MAX_SPEED_PWM


//Includes---------------------------------------------------------------------
#include <Arduino.h>
#include "HBridge/L298N.h"

L298N* Driver;

void setup() {
  Serial.begin(9600);
  Serial.println("Extruding in 5 seconds");

}

void loop() {

}

