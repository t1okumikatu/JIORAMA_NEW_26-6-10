#include <esp_now.h>
#include <WiFi.h>
#include "esp_wifi.h"
#include "constant.h"

void onReceive(const esp_now_recv_info *info, const uint8_t *data, int len) {   
  const uint8_t *mac = info->src_addr; 
  Serial.print("!"); 
  // 2. 送信元のMACアドレスを表示
  for (int i = 0; i < 6; i++) {
    Serial.printf("%02X", info->src_addr[i]);
    if (i < 5) Serial.print(":");
  }
  Serial.printf("     (len:%d)\n", len);
  // ーーー ここからデバッグコード ーーー
  Serial.print("Received Raw Data: ");
  for (int i = 0; i < len; i++) {
    Serial.print(data[i]);  // 10進数で1バイトずつ表示
    Serial.print(" ");
  }
  Serial.println();
  // ーーー ここまでデバッグコード ーーー
  // 3. もし ID 99 が届いていたら
  if (len >= 1 && data[0] == 99) {

    //Serial.println("    -> OK: ID 99 FOUND!");
    //Serial.println("");
    Send2 = data[3];
   // Serial.println(data[3]); 
  }
}


void setup() {
  // ... 今まで通りのセットアップ内容 ...
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect(); // ★これを入れると受信が安定することが多いです
  // ... WiFi.mode(WIFI_STA); の後で ...
  Serial.print("Current MAC Address: ");
  Serial.println(WiFi.macAddress());
  if (esp_now_init() != ESP_OK) return;
  //esp_now_register_recv_cb(onReceive);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  ledcAttachChannel(in1, freq, resolution, ch1);
  ledcAttachChannel(in2, freq, resolution, ch2);
}

void loop() {
  //forward(150); 
  recvNowpeer();
  APSTA();
  // 受信側（Train）のシリアルモニタで確認
  Serial.print("Current Channel: ");
  Serial.println(WiFi.channel());
  Serial.print("Send2== ");
  Serial.println(Send2);
  
  if(Send2>0){
   forward(Send2); 
  }
  if(Send2==0){
   brake(); 
  }
  
  delay(1);
}