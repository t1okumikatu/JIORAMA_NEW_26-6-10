#include "constant.h"
void setup() {
  Serial.begin(115200);
  Serial2.begin(1000000,SERIAL_8N1,16,17);        // 16Tx,17Rx Mega  18-RX1,17-RX2  serial 1
  pinMode(PIN_PE0, OUTPUT);   // In 
  pinMode(PIN_PE1, OUTPUT);   // In 
  pinMode(PIN_PE2, OUTPUT);   // Out      
  pinMode(PIN_PE3, OUTPUT);   // Out
  pinMode(StartSW ,INPUT_PULLUP);//#13
  pinMode(servoInt ,OUTPUT);
  pinMode(NANO_reset, OUTPUT);
  digitalWrite(NANO_reset,  LOW);
  delay(500);
  digitalWrite(NANO_reset, HIGH);
  digitalWrite(PIN_PE0,LOW);//M-IN
  digitalWrite(PIN_PE1,HIGH);
  digitalWrite(PIN_PE3,HIGH);
  digitalWrite(PIN_PE2,LOW);//M=OUT
  Serial.println("TEST_start");
  delay(5000);
}

void loop() {
  digitalWrite(PIN_PE0,HIGH);//IN1-SUB
  digitalWrite(PIN_PE1,LOW);
  digitalWrite(servoInt, LOW);
  delay(1);
  digitalWrite(servoInt, HIGH); 
  Serial.println("IN=1 SUB");
  delay(3000);
  //---------------------------------------------
  digitalWrite(PIN_PE0,LOW);//IN2-MAIN
  digitalWrite(PIN_PE1,HIGH);
  digitalWrite(servoInt, LOW);
  delay(1);
  digitalWrite(servoInt, HIGH); 
  Serial.println("IN=2 Main");
  delay(3000);
  //--------------------------------------------
  digitalWrite(PIN_PE3,LOW);
  digitalWrite(PIN_PE2,HIGH);//OUT1-SUB
  digitalWrite(servoInt, LOW);
  delay(1);
  digitalWrite(servoInt, HIGH); 
  Serial.println("OUT=1 SUB");
  delay(3000);
  //------------------------------------------
  digitalWrite(PIN_PE3,HIGH);
  digitalWrite(PIN_PE2,LOW);//OUT2-MAIN
  digitalWrite(servoInt, LOW);
  delay(1);
  digitalWrite(servoInt, HIGH); 
  Serial.println("OUT=2 Main");
  delay(3000);
}
