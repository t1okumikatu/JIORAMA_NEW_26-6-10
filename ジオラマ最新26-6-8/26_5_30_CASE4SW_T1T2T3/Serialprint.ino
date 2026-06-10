void Serialprint(){
  unsigned long nowTime = millis();
   Serial.print(F("Send1======"));
  Serial.println(Send1);  
   Serial.print(F("Train1Flag15D1======"));
  Serial.println(Train1Flag15D1);
   Serial.print(F("Train1Flag15D2======"));
  Serial.println(Train1Flag15D2);
   Serial.print(F("Train2Flag15D1======"));
  Serial.println(Train2Flag15D1);
   Serial.print(F("Train2Flag15D2======"));
  Serial.println(Train2Flag15D2);
   Serial.print(F("Train3Flag15D1======"));
  Serial.println(Train3Flag15D1);
   Serial.print(F("Train3Flag15D2======"));
  Serial.println(Train3Flag15D2);
   Serial.print(F("Train4Flag15D1======"));
  Serial.println(Train4Flag15D1);
   Serial.print(F("Train4Flag15D2======"));
  Serial.println(Train4Flag15D2);
  
   Serial.println(F("--------------------------------"));
  /* 
  Serial.print("S_Timer_set>>>M_Timer_set ");
  Serial.print(digitalRead(S_Timer_set));
    Serial.print(" >>> ");
  Serial.println(digitalRead(M_Timer_set));
  Serial.print("S_Train_go>>>M_Train_go ");
  Serial.print(digitalRead(S_Train_go));
    Serial.print(" >>> ");
  Serial.println(digitalRead(M_Train_go));
  */
  Serial.print(F("Data6>>>nowTime==============---- "));
  Serial.print(Data6);
  Serial.print(F(" >>> "));
  Serial.println(nowTime);
  Serial.print(F("SubSetTime10>>>>>MainSetTime32 "));
  Serial.print(SubSetTime10);
    Serial.print(F(" >>> "));
  Serial.println(MainSetTime32);
 
}
