#ifndef hcsr04_h
#define hcsr04_h

#include <Arduino.h>

class hcsr04{
	public:
		hcsr04(int,int);
		unsigned long sure=0;
		int mesafe=0;
		int olcum(void);
	private:
		int echo,trigger;
};

#endif
