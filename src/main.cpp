#include <Arduino.h>
#include <module/hc595.h>
HC595 ic1(10, 13, 11);

void setup()
{
  Serial.begin(9600);
 
}

void loop()
{
 
  uint8_t chan_can_dieu_khien = 1;
  bool thanh_cong = ic1.bat_chan(chan_can_dieu_khien);
  if (thanh_cong){
    Serial.println(chan_can_dieu_khien);
   
  }else{
      Serial.println("loi");
  }
  delay(1000);
  ic1.tat_chan(chan_can_dieu_khien);
  delay(100);
  ic1.send(B11111111);
  delay(1000);
  ic1.send(B00000000);
  delay(1000);

}