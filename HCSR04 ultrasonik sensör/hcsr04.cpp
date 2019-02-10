#include <Arduino.h>
#include "hcsr04.h"

hcsr04::hcsr04(int pin1,int pin2){
	pinMode(A2, OUTPUT);
	trigger = pin1;
	pinMode(A3, INPUT);
	echo = pin2;
}
int hcsr04::olcum(void){
	digitalWrite(A2, LOW);
	delayMicroseconds(2);
	digitalWrite(A2, HIGH);
	delayMicroseconds(10);
	digitalWrite(A2, LOW);
	sure = pulseIn(A3, HIGH);
	mesafe = (sure/2) / 29.1;
	
	if(mesafe > 200 || mesafe < 0){
			return 999;
	}
	else{
			return mesafe;
	}
	
}
