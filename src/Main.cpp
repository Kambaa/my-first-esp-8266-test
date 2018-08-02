//
// Created by yg on 7/30/18.
//

#include "Main.h"
#include "Arduino.h"
#include "ESP8266WiFi.h"

#define LED_PIN 14



const char *ssid = "yg";
const char *password = "yg1234565";

void setup() {
    Serial.begin(9600);

    pinMode(LED_PIN, OUTPUT);

//    Serial.begin(115200);
//    delay(15000);
    // attempt to connect to Wifi network:
//    Serial.println();
//    Serial.println();
//    Serial.print("Connecting to ");
//    Serial.println(ssid);

    /* Explicitly set the ESP8266 to be a WiFi-client, otherwise, it by default,
       would try to act as both a client and an access-point and could cause
       network-issues with your other WiFi-devices on your WiFi-network. */
//    WiFi.mode(WIFI_STA);
//    WiFi.begin(ssid, password);

//    while (WiFi.status() != WL_CONNECTED) {
//        delay(500);
//        Serial.print(".");
//    }
}

void loop() {
    digitalWrite(LED_PIN, 1);   // turn the LED on (HIGH is the voltage level)
    delay(250);                       // wait for a second
    digitalWrite(LED_PIN, 0);    // turn the LED off by making the voltage LOW
    delay(250);

//    Serial.println("You are in the loop method. Waiting for 3 sec...");
//    delay(3000);
//    String status;
//    switch (WiFi.status()) {
//        case WL_CONNECTED :
//            status = "Connected";
//            break;
//        default:
//            status = "NOT CONNECTED";
//            break;
//    }

//    Serial.println("Wifi status: " + status);
//    Serial.println("Local IP: " + WiFi.localIP().toString());
//    Serial.println("BSSIDStr: " + WiFi.BSSIDstr());
//    Serial.println("Wifi hostname: " + WiFi.hostname());
//    Serial.println("End of loop method.");
}
