#include "Arduino.h"  
#include "myString.h"

String text;
int len;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    text = Serial.readString();
    len = obj.strlen(text);
    obj.tolower(text, len); 
  }
}
