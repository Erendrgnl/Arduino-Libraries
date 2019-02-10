#include <Arduino.h>
#include "m_surucu.h"
 
m_surucu::m_surucu(int pin1,int pin2){
 pinMode(pin1, OUTPUT);
 _pin1 = pin1; 
 pinMode(pin2, OUTPUT);
 _pin2 = pin2; 
 pinMode(A5,OUTPUT);
 analogWrite(A5,150);
}
 
void m_surucu::go(void){
 digitalWrite(_pin1,HIGH);
 digitalWrite(_pin2,LOW);
}
 
void m_surucu::back(void){
 digitalWrite(_pin1,LOW);
 digitalWrite(_pin2,HIGH);
}
 
void m_surucu::stop(void){
 digitalWrite(_pin1,LOW);
 digitalWrite(_pin2,LOW);
 
}
