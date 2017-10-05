#include "Arduino.h"  
#include "myString.h"

const int serialSpeed = 9600;
String text;
int len;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(serialSpeed);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    text = Serial.readString();
    //Serial.println(obj.tolower(text));
    //Serial.println(obj.toupper(text)); 
    //Serial.println(obj.strlen(text));
  }
}
