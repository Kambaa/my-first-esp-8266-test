//
// Created by yg on 7/30/18.
//

#include "Main.h"
#include "Arduino.h"
#include "ESP8266WiFi.h"

int ESP_LED_NO = 2;
bool enableBlinking = false;
int blinkingInterval = 500;

void setup() {
    Serial.begin(9600);
// WiFi.begin("ssid","password");
    pinMode(ESP_LED_NO, OUTPUT);
}

void loop() {
    if (enableBlinking) {
        delay(blinkingInterval);
        digitalWrite(ESP_LED_NO, HIGH);
        delay(blinkingInterval);
        digitalWrite(ESP_LED_NO, LOW);
    } else {
        while (Serial.available()) {
            Serial.println("Enable led blinking? (y/n): ");
            String isEnabled = Serial.readString();
            Serial.println("You have entered: " + isEnabled);
            if (isEnabled == "y") {
                enableBlinking = true;
//                  Serial.println("Enter led interval: ");
//                String temp = Serial.readStringUntil('!');
//                Serial.println("You have entered: " + temp);
//                if (temp.toInt() > 0) {
//                    blinkingInterval = temp.toInt();
//                }
                Serial.println("Configuration saved. Now watch the led blinking!");
            } else if (isEnabled == "n") {
                enableBlinking = false;
            } else {
                continue;
            }
            break;
        }
    }
}