#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

 // TODO 1:
 // Define RED pin (Use 9)

 // TODO 2:
 // Define GREEN pin (Use 10)

 // TODO 3:
 // Define BLUE pin (Use 11)
int redPin = 9;
int greenPin = 10;
int bluePin = 11;

void setup() {

    // TODO 4:
    // Initialize Serial communication (9600 baud)

    // TODO 5:
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    // Configure RGB pins as OUTPUT

    // TODO 6:
    // Print initialization message
}

void loop() {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
    delay(1000);
    // Green
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 0);
    delay(1000);

    // Blue
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255);
    delay(1000);

    // White
    analogWrite(redPin, 255);


    // -------- DIGITAL MODE --------

    // TODO 7:
    // Turn ON red (digital HIGH)

    // TODO 8:
    // Turn OFF red

    // -------- ANALOG (PWM) MODE --------

    // TODO 9:
    // Set RED brightness using analogWrite()

    // TODO 10:
    // Set GREEN brightness using analogWrite()

    // TODO 11:
    // Set BLUE brightness using analogWrite()

    // TODO 12:
    // Add delay for visible transition
}
