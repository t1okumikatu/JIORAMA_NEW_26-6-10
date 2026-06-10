//==================================
 //server.begin();
//============================================
 // サーバーのルートディレクトリにアクセスされた時のレスポンス
 /*
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(SPIFFS, "/index.html", String(), false, processor);
  });
  
  // style.cssにアクセスされた時のレスポンス
  server.on("/style.css", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(SPIFFS, "/style.css", "text/css");
  });

  // Onボタンが押された時のレスポンス
  server.on("/on", HTTP_GET, [](AsyncWebServerRequest *request){
    digitalWrite(EN_reset, HIGH);
    delay(5000);
    digitalWrite(EN_reset, LOW);
     delay(3000);
   // ESP.restart();
    /*
    restart=1;
    delay(10);
    restart=0;
    */
    //Send4=22;
    //digitalRead(StartSW)=1;
    //Send1=13; 
   // Send2=24;
    //Send1=14;
   /*
    request->send(SPIFFS, "/index.html", String(), false, processor);
  });
  
  // Offボタンが押された時のレスポンス
  server.on("/off", HTTP_GET, [](AsyncWebServerRequest *request){
//    digitalWrite(LED_PIN, LOW); 
     digitalWrite(PIN_PE3, LOW);
     //restart=0;
     //ESP.restart();
   Send4=0;
   //Send1=0;
 
    request->send(SPIFFS, "/index.html", String(), false, processor);
  });
   // VOLTボタンが押された時のレスポンス
  server.on("/temperture", HTTP_GET, [](AsyncWebServerRequest *request){
    // digitalWrite(LED_PIN, HIGH);
     restart=1;
    //Send1=888;
    //ESP.restart();
    request->send(SPIFFS, "/index.html", String(), false, processor);
  });
   server.on("/temperature", HTTP_GET, [](AsyncWebServerRequest *request){
    
    request->send_P(200, "text/plain", readDHTTemperature().c_str());
  });
//===============================================
  //AsyncElegantOTA.begin(&server);    // Start ElegantOTA
  server.begin();
  Serial.println("HTTP server started");
 //=============================
 */