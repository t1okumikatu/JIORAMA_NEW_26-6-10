 void OUT_19_PE3 (){
  if (OUT==1){    //Sub
  digitalWrite(PIN_PE2, LOW); //H   // Servo Out Sub  HIGH_PE2
  digitalWrite(PIN_PE3, LOW);             // LOOP_SUB　緑19
  delay(10);
  digitalWrite(servoInt, LOW);
  delay(1);
  digitalWrite(servoInt, HIGH); 
  Serial.println("OUT==1 PE2#23H sub PE3#19 L");
  delay(1000);
 }
  if (OUT==2){    //Main
  digitalWrite(PIN_PE2, HIGH); //L   // Servo Out Sub  HIGH_PE2
  digitalWrite(PIN_PE3, HIGH);            // LOOP_MAIN　緑19
  delay(10);
  digitalWrite(servoInt, LOW);
  delay(1);
  digitalWrite(servoInt, HIGH); 
  Serial.println("OUT==2 PE2#23L main PE3#19 H");
  delay(1000);
 }
 }
