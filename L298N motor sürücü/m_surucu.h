#ifndef m_surucu_h
#define m_surucu_h
 
#include <Arduino.h>
 
 
class m_surucu
{
public:
 m_surucu(int pin1,int pin2);  //Constructor. attach pin to blink
 void go(void);  //enable blinking with 1s duration
 void back(void);   //enable blinking with blink duration
 void stop(void);  //enable blinking with blink duration and number of loops
private:
 int _pin1,_pin2;
};
 
#endif
