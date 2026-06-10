 void IN_18_PE1 (){
  if (IN==1){
  digitalWrite(PIN_PE0, HIGH);          // LOOP_SUB　緑4
  digitalWrite(PIN_PE1, LOW);          // LOOP_SUB　緑18
  delay(10);
  digitalWrite(servoInt, LOW);
  delay(1);
  digitalWrite(servoInt, HIGH); 
  Serial.println("IN==1 PE0#4H sub PE1#18 L");
  delay(1000);
 }
  if (IN==2){
  digitalWrite(PIN_PE0, LOW);          // LOOP_Main　緑4
  digitalWrite(PIN_PE1, HIGH);          // LOOP_Main　緑18
  delay(10);
  digitalWrite(servoInt, LOW);
  delay(1);
  digitalWrite(servoInt, HIGH); 
  Serial.println("IN==2 PE0#4L main PE1#18 H");
  delay(1000);
 }
 }
