#ifndef ldr.h
#define ldr.h
 
#include <Arduino.h>
 //int kirmizi_f,int yesil_f,int mavi_f
class renk_sensor
{
public:
 renk_sensor(int out1,int out2,int out3,int out4,int in5);
 int frequency = 0;
 int avarage = 25;
 int r,g,b;
 char filtre(void);
private:
 int S0;
 int S1;
 int S2;
 int S3;
 int sensorOut;
};
 
#endif
