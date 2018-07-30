//
// Created by yg on 7/30/18.
//

#include "Main.h"
#include "Arduino.h"
#include "ESP8266WiFi.h"
int ESP_LED_NO=2;
void setup(){
Serial.begin(9600);
// WiFi.begin("ssid","password");
pinMode(ESP_LED_NO,OUTPUT);
}

void loop(){
    Serial.println("Hello Wold!");
    delay(500);
    digitalWrite(ESP_LED_NO,HIGH);
    delay(500);
    digitalWrite(ESP_LED_NO,LOW);
    // Serial.read();
}