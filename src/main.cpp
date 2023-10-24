#include<Arduino.h>
#include<module/hc595.h>
HC595 ic1(13,11,10);

void setup(){
  ic1.bat_chan(3);
}

void loop(){
    
}