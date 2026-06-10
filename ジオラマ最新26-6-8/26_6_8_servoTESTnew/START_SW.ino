void START_SW(){
 
  Serial.println("OUT1_start_button");
  while(digitalRead(StartSW) == HIGH){}//1-0
  //---------------------------------SUB------------------------------
  OUT=1;
  OUT_19_PE3 ();
  Serial.println("OUT1_SUB");
   while(digitalRead(StartSW) == HIGH){}//1-0
  //-----------------------------------SUB-----------------------
  Serial.println("OUT2_start_button");
  while(digitalRead(StartSW) == HIGH){}//1-0
  //----------------------------------MAIN-----------------------------
  OUT=2;
  OUT_19_PE3 ();
  Serial.println("OUT2_MAIN");
  while(digitalRead(StartSW) == HIGH){}//1-0
  //-----------------------------------SUB-----------------------

  //======================IN----------------------------------------
  Serial.println("IN1_start_button");
  while(digitalRead(StartSW) == HIGH){}//1-0
  //---------------------------------SUB------------------------------
  IN=1;
  IN_18_PE1();
  Serial.println("IN_SUB");
  while(digitalRead(StartSW) == HIGH){}//1-0

  //-----------------------------------SUB-----------------------
  Serial.println("IN2_start_button");
  while(digitalRead(StartSW) == HIGH){}//1-0
  IN=2;
  IN_18_PE1();
  Serial.println("IN2_MAIN");
  while(digitalRead(StartSW) == HIGH){}//1-0

}
 
 