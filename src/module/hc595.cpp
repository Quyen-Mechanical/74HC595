#include<module/hc595.h>

HC595::HC595(uint8_t chan_chot, uint8_t chan_xung_thoi_gian, uint8_t chan_tin_hieu){
    latch = chan_chot;
    clock = chan_xung_thoi_gian;
    data = chan_tin_hieu;
    pinMode(latch,1);
    pinMode(clock,1);
    pinMode(data,1);
}
void HC595::bat_chan(uint8_t chan_can_bat){
    port = chan_can_bat;

    port |= 1<< (port-1);
}
HC595::~HC595(){
    
}