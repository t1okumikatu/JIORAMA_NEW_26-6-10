 void Serialprint2(){
 unsigned long nowTime = millis(); 
/*
   Serial.print("Train1-4Flag13==");
   Serial.print(Train1Flag13);
   Serial.print(Train2Flag13);
   Serial.print(Train3Flag13);
   Serial.println(Train4Flag13);
   
   Serial.print("Train1-4_Flag1-4==");
   Serial.print(Train1Flag1);
   Serial.print(Train2Flag2);
   Serial.print(Train3Flag3);
   Serial.println(Train4Flag4);
   Serial.print("SubSetservoTime13===");
   Serial.println(SubSetservoTime13);
 */
 
   Serial.println(F("========================="));
   Serial.print(F("startFlag------>  "));
   Serial.println(startFlag);
   Serial.print(F("compete===> "));
   Serial.println(compete);
   Serial.print(F("Train1Flag22==>Train2Flag32=="));
   Serial.print(Train1Flag22);
   Serial.println(Train2Flag32); 
   /*
   Serial.print("Train1-4Flag22==");
   Serial.print(Train1Flag22);
   Serial.print(Train2Flag22);
   Serial.print(Train3Flag22);
   Serial.println(Train4Flag22);
   Serial.print("Train1-4Flag32==");
   Serial.print(Train1Flag32);
   Serial.print(Train2Flag32);
   Serial.print(Train3Flag32);
   Serial.println(Train4Flag32);
   */
  //Serial.print("SubSetTime21===>MainSetTime31  ");
  //Serial.print(SubSetTime21);
 // Serial.print("  ");
  //Serial.println(MainSetTime31);
  Serial.print(F("Time22===>Time32  "));
  Serial.print(Time22);
  Serial.print(F("  "));
  Serial.println(Time32);
  Serial.print(F("TrainTimeSetFlag1234=="));
  Serial.print(Train1TimeSetFlag1);
  Serial.print(Train2TimeSetFlag2);
  Serial.print(Train3TimeSetFlag3);
  Serial.println(Train4TimeSetFlag4);
  Serial.print(F("nowTime=="));
  Serial.println(nowTime);
  Serial.print(F("SubSetTime22===>MainSetTime32  "));
  Serial.print(SubSetTime22);
  Serial.print(F("  "));
  Serial.println(MainSetTime32);
  Serial.print(F("Data5 Data6  Data7=="));
  Serial.print(Data5);
  Serial.print(Data6);
  Serial.println(Data7);
  Serial.print(F("SubServoTime22==>MainServoTime32  "));
  Serial.print(SubServoTime22);
  Serial.print(F("  "));
  Serial.println(MainServoTime32);
   Serial.print(F("guide1-4)^^^"));
 Serial.print(digitalRead(guide1));
 Serial.print(digitalRead(guide2));
 Serial.print(digitalRead(guide3));
 Serial.println(digitalRead(guide4));
 //=======================

  //   Serial.println(digitalRead(S_Train_go));
  //   Serial.println(digitalRead(M_Train_go));
   //  Serial.println(Train);
     Serial.print("Train==");
     Serial.println(Train);
     Serial.print("Se1234==");
     Serial.print(Send1);
     Serial.print("-");
     Serial.print(Send2);
     Serial.print("-");
     Serial.print(Send3);
     Serial.print("-");
     Serial.println(Send4);
     Serial.print("Data5==");
     Serial.println(Data5);
     Serial.print("Data6==");
     Serial.println(Data6);
     Serial.print("Data7==");
     Serial.println(Data7);
    
 //=====================
  /*   
     Serial.print("Poji22>>32  ");
     Serial.print(Poji22);
     Serial.println(Poji32);
     
     Serial.print("T1SS-T4SS  ");
     Serial.print(T1SS);
     Serial.print(T2SS);
     Serial.print(T3SS);
     Serial.println(T4SS);
     Serial.print("T1MS-T4MS  ");
     Serial.print(T1MS);
     Serial.print(T2MS);
     Serial.print(T3MS);
     Serial.println(T4MS);
     
     Serial.print("Train1G>>4G  ");
     Serial.print(Train1G);
     Serial.print(Train2G);
     Serial.print(Train3G);
     Serial.println(Train4G);
 */    
 /*
     Serial.print("S_Train_go>M_Train   ");
     Serial.print(S_Train_go);
     Serial.println(M_Train_go);
     */
   
  
   
   /*
   Serial.print("Train1G>>Train4G==========");
   Serial.print(Train1G);
   Serial.print(Train2G);
   Serial.print(Train3G);
   Serial.println(Train4G); 
  */
    /*
   Serial.print("Train1=====");
  Serial.println(Train1);
  Serial.print("Send1=====");
  Serial.println(Send1);
 */ 
 } 
