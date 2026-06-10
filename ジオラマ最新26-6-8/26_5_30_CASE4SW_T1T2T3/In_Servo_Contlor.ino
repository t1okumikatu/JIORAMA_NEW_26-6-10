void in_Servo_Contlor(){
// ** In Servo Contlor ******************************************************

  if(Data5==1 && ServoInFlag==0){ // Sub(ServoがMain)
    
    digitalWrite(PIN_PE0, HIGH);         // Servo In Sub 青
    //digitalWrite(PIN_PD3, LOW);          // PointSingnal In/Sub/Red
    //digitalWrite(PIN_PD0, LOW);          // PointSingnal In/Main/Green
    digitalWrite(PIN_PE1, LOW);          // Servo In Main 橙
    //digitalWrite(PIN_PD2, HIGH);         // PointSingnal In/Sub/Green
    //digitalWrite(PIN_PD1, HIGH);         // PointSingnal In/Main/Red
    digitalWrite(servoInt, LOW);
    //delay(1);
    digitalWrite(servoInt, HIGH); 
   
    ServoInFlag = 0;
  }
  if(Data5==2 && ServoInFlag==0)
  { // Main
   
    digitalWrite(PIN_PE0,LOW);         // Servo In Sub 青
    //digitalWrite(PIN_PD2, LOW);          // PointSingnal In/Sub/Green
    //digitalWrite(PIN_PD1, LOW);          // PointSingnal In/Main/Red
    digitalWrite(PIN_PE1,HIGH);          // Servo In Main　橙
   // digitalWrite(PIN_PD3, HIGH);         // PointSingnal In/Sub/Red
   // digitalWrite(PIN_PD0, HIGH);         // PointSingnal In/Main/Green
    digitalWrite(servoInt, LOW);
    delay(1);
    digitalWrite(servoInt, HIGH); 
   
    ServoInFlag = 0;
  }
}
