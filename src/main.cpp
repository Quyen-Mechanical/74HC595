#include <Arduino.h>

void send(uint8_t data)
{
  digitalWrite(10, 0);
  shiftOut(11, 13, LSBFIRST, data);
  digitalWrite(10, 1);
}

void setup()
{
  pinMode(10, OUTPUT); // LATCH SLAVE SELECT
  pinMode(11, OUTPUT); // DATA SERIAL (DATAPIN)
  pinMode(13, OUTPUT); // CLOCK PIN SCK
}

void loop()
{

  // digitalWrite(10, 0);
  // shiftOut(11, 13, LSBFIRST, 0b01010101);
  // digitalWrite(10, 1);
  // delay(300);
  // digitalWrite(10, 0);
  // shiftOut(11, 13, LSBFIRST, 0b10101010);
  // digitalWrite(10, 1);
  // delay(300);
   // digitalWrite(10, 0);
  // shiftOut(11, 13, LSBFIRST, 0b11111111 );
  // digitalWrite(10, 1);
  // delay(500);
   // digitalWrite(10, 0);
  // shiftOut(11, 13, LSBFIRST,0b00000000 );
  // digitalWrite(10, 1);
  // delay(1000);
  send(0b01010101);
  delay(300);
  send(0b10101010);
  delay(300);
  send(0b11111111);
  delay(500);
  send(0b00000000);
  delay(1000);
}
