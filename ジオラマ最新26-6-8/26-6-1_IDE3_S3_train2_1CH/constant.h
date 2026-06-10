#ifndef CONSTANT_H
#define CONSTANT_H
#include <Arduino.h>

// --- 定数 ---
const int VALUE_MAX = 255; 
const int in1 = 1;
const int in2 = 2;
const int freq = 200; 
#define resolution 8
const int ch1 = 1;
const int ch2 = 2;
uint8_t data[26]={99,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,88};
volatile int Send1=0,Send2=0, Send3=0, Send4=0, ctr=0;
volatile int Train1=0, Train2=0, Train3=0, Train4=0, Data5=0, Data6=0, Data7=0;

#endif