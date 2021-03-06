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

String myClass::tolower(String text){
  int i;
  int len = 0;
  while(text[len] != '\0'){
    len += 1;
  }
  for(i = 0;i < len;i++){
    if(text[i] <= 'Z' && text[i] >= 'A'){
      text[i] = text[i] + ('a' - 'A');
    }
  }
  return text;  
}

String myClass::toupper(String text){
  int i;
  int len = 0;
  while(text[len] != '\0'){
    len += 1;
  }
  for(i = 0;i < len;i++){
    if(text[i] <= 'z' && text[i] >= 'a'){
      text[i] = text[i] - ('a' - 'A');
    }
  }
  return text;  
}

myClass obj = myClass();
