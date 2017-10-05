#include "Arduino.h"
#include "myString.h"

myClass::myClass(){
}

int myClass::strlen(String text){
  int i = 0;
  while(text[i] != '\0'){
    i += 1;
  }
  return i;
}

void myClass::tolower(String text,int len){
  int i;
  for(i = 0;i < len;i++){
    if(text[i] <= 'Z' && text[i] >= 'A'){
      text[i] = text[i] + ('a' - 'A');
    }
  }
  Serial.println(text);  
}

myClass obj = myClass();
