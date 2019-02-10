#include "Arduino.h"
#include "renk_sensor.h"

renk_sensor::renk_sensor(int out1,int out2,int out3,int out4,int in5)
{
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  pinMode(out4, OUTPUT);
  pinMode(in5, INPUT);
  
  S0 = out1;
  S1 = out2;
  S2 = out3;
  S3 = out4;
  sensorOut=in5;
  
  digitalWrite(S0,HIGH);
  digitalWrite(S1,LOW);
}

char renk_sensor::filtre(void)
{
  //**************************** Kirmizi Renk Filtresi****************************

  int mavi_f=0;
  int kirmizi_f=0;
  int yesil_f=0;
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW); 
  kirmizi_f = pulseIn(sensorOut, LOW);
 


  
  //**************************** Yesil Renk Filtresi****************************
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);  
  yesil_f = pulseIn(sensorOut, LOW);

  

   //**************************** Mavi Renk Filtresi****************************
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);  
  mavi_f = pulseIn(sensorOut, LOW);
  

  
  if(kirmizi_f<yesil_f && kirmizi_f<mavi_f){ return 'k';}
  if(yesil_f<kirmizi_f && yesil_f<mavi_f){ return 'y'; }
  if(mavi_f<yesil_f && mavi_f<kirmizi_f){  return 'm';}
  else{return 'x';}


}
