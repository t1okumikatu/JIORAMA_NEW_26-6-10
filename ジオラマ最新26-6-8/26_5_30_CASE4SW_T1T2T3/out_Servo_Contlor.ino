void out_Servo_Contlor(){
  /*
  start=random(100,1000);
  Serial.println(Data6);
  if(start==500){
    Data6=2;
    if (!(Train1=="32" || Train2=="32" || Train3=="32" || Train4=="32" )){
      Data6=1;
    }
  }
}
*/
 
//>>>>>>>>>sub_main==!0
   
    if(Data6==1 ){        // Sub側
      //ServoOutFlag = 1;                // Sub Flag
      //digitalWrite(PIN_PD7, LOW);      // PointSingnal Out/Sub/Red
      //digitalWrite(PIN_PD4, LOW);      // PointSingnal Out/Main/Green
    
      digitalWrite(PIN_PE2, HIGH);    // Servo Out Sub  HIGH_PE2
      digitalWrite(PIN_PE3, LOW);     // Servo Out Main
       digitalWrite(servoInt, LOW);
   // delay(1);
    digitalWrite(servoInt, HIGH); 
                
      //digitalWrite(PIN_PD6, HIGH);     // PointSingnal Out/Sub/Green
      //digitalWrite(PIN_PD5, HIGH);     // PointSingnal Out/Main/Red
      }
    
     if(Data6==2  ){   // Main側
                                        // Main Flag
      digitalWrite(PIN_PE2, LOW);     // Servo Out Sub
      digitalWrite(PIN_PE3, HIGH);      // Servo Out Main
      digitalWrite(servoInt, LOW);
    //delay(1);
    digitalWrite(servoInt, HIGH); 
      //digitalWrite(PIN_PD6, LOW);      // PointSingnal Out/Sub/Green
      //digitalWrite(PIN_PD5, LOW);      // PointSingnal Out/Main/Red
      //digitalWrite(PIN_PD7, HIGH);     // PointSingnal Out/Sub/Red
      //digitalWrite(PIN_PD4, HIGH);     // PointSingnal Out/Main/Green
       
    }
  /*
    //>>>>sub_0-main_!0>>>>MAIN
  if(SubSetTime22==0 && MainSetTime32!=0){
    ServoOutFlag = 0;                   // Sub Flag
    //digitalWrite(PIN_PD7, LOW);         // PointSingnal Out/Sub/Red
    //digitalWrite(PIN_PD4, LOW);         // PointSingnal Out/Main/Green
    digitalWrite(PIN_PE3, HIGH);        // Servo Out Main
    digitalWrite(PIN_PE2, LOW);         // Servo Out Sub
    //digitalWrite(PIN_PD6, HIGH);        // PointSingnal Out/Sub/Green
    //digitalWrite(PIN_PD5, HIGH);        // PointSingnal Out/Main/Red
  }
     //>>>>>sub_!0-main_0>>>SUB
  if(SubSetTime22!=0 && MainSetTime32==0){
    ServoOutFlag = 0;                   // Main Flag
    //digitalWrite(PIN_PD6, LOW);         // PointSingnal Out/Sub/Green
    //digitalWrite(PIN_PD5, LOW);         // PointSingnal Out/Main/Red
    digitalWrite(PIN_PE2, HIGH);        // Servo Out Sub
    digitalWrite(PIN_PE3, LOW);         // Servo Out Main
    //digitalWrite(PIN_PD7, HIGH);        // PointSingnal Out/Sub/Red
   // digitalWrite(PIN_PD4, HIGH);        // PointSingnal Out/Main/Green
  }
  //>>>>>>sub_main=0>>>SUB
  if(SubSetTime22==0 && MainSetTime32==0){
    ServoOutFlag = 0;                  // Sub Flag
    //digitalWrite(PIN_PD7, LOW);        // PointSingnal Out/Sub/Red
    //digitalWrite(PIN_PD4, LOW);        // PointSingnal Out/Main/Green
    digitalWrite(PIN_PE2, HIGH);       // Servo Out Main
    digitalWrite(PIN_PE3, LOW);        // Servo Out Sub
    //digitalWrite(PIN_PD6, HIGH);       // PointSingnal Out/Sub/Green
    //digitalWrite(PIN_PD5, HIGH);       // PointSingnal Out/Main/Red
  }
  */
}
  

  
