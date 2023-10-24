#include <Arduino.h>
#include <module/hc595.h>
HC595 ic1(10, 13, 11);

void setup()
{
  Serial.begin(9600);
  Serial.print("chan clock cau ic 1 la :");
  Serial.println(ic1.clock);
  uint8_t chan_can_dieu_khien = 9;
  bool thanh_cong = ic1.bat_chan(chan_can_dieu_khien);
  if (thanh_cong){
    delay(500);
    ic1.tat_chan(chan_can_dieu_khien);
  }else{
      Serial.println("loi");
  }
}

void loop()
{
}