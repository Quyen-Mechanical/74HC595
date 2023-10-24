#include <Arduino.h>

class HC595
{
private:
    uint8_t latch;
    uint8_t data;
    uint8_t clock;
    uint8_t port;

public:
    HC595(uint8_t chan_chot, uint8_t chan_xung_thoi_gian, uint8_t chan_tin_hieu);
    ~HC595();
    void bat_chan(uint8_t chan_can_bat);
};