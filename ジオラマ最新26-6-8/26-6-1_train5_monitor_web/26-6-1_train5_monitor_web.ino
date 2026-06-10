#include <esp_now.h>
#include <WiFi.h>
#include <ESPAsyncWebServer.h>

const char* ssid = "Train5_Monitor";
const char* password = "password123";

AsyncWebServer server(80);
AsyncWebSocket ws("/ws");

uint8_t receivedData[20];

// スマホ用HTML（左右の値を別々に判定し、1ならSUB、2ならMAIN、それ以外は数字のまま残す）
const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Train5 Monitor v4</title>
    <style>
        body { font-family: Arial, sans-serif; background: #222; color: #fff; margin: 20px; }
        h1 { text-align: center; color: #00ffcc; font-size: 24px; }
        .container { max-width: 500px; margin: 0 auto; background: #333; padding: 15px; border-radius: 10px; box-shadow: 0 4px 10px rgba(0,0,0,0.5); }
        .data-row { display: flex; justify-content: space-between; padding: 12px 0; border-bottom: 1px solid #444; font-size: 16px; }
        .label { color: #aaa; }
        .value { font-weight: bold; color: #ffeb3b; font-family: monospace; }
        .space-above { margin-top: 15px; }
    </style>
</head>
<body>
    <div class="container">
        <h1>Train5 運行モニター</h1>
        <div class="data-row"><span class="label">Train Spd1:</span><span class="value" id="d1">-</span></div>
        <div class="data-row"><span class="label">Train Spd2:</span><span class="value" id="d3">-</span></div>
        <div class="data-row"><span class="label">Train Spd3:</span><span class="value" id="d5">-</span></div>
        <div class="data-row"><span class="label">Train Spd4:</span><span class="value" id="d7">-</span></div>
        
        <div class="data-row space-above"><span class="label">Train1 / 2 位置:</span><span class="value"><span id="d9">-</span> / <span id="d10">-</span></span></div>
        <div class="data-row"><span class="label">Train3 / 4 位置:</span><span class="value"><span id="d11">-</span> / <span id="d12">-</span></span></div>
        
        <div class="data-row"><span class="label">SIn / SOut:</span><span class="value" id="custom_status">- / -</span></div>
        
        <div class="data-row space-above"><span class="label">Counter / StartBtn:</span><span class="value"><span id="d17">-</span> / <span id="d18">-</span></span></div>
    </div>

    <script>
        var gateway = `ws://${window.location.hostname}/ws`;
        var websocket;
        function initWebSocket() {
            websocket = new WebSocket(gateway);
            websocket.onmessage = onMessage;
            websocket.onclose = function() { setTimeout(initWebSocket, 2000); };
        }
        function onMessage(event) {
            var data = event.data.split(',');
            if(data.length >= 20) {
                // 通常データの処理
                for(var i=0; i<20; i++) {
                    var el = document.getElementById('d' + i);
                    if(el) el.innerText = data[i];
                }
                
                // 【ご要望通りの個別変換処理】
                var leftVal = data[13];  // SInのデータ
                var rightVal = data[14]; // SOutのデータ
                
                // 左側：1 が来れば SUB に変身。それ以外は数字のまま
                if (leftVal == 1) {
                    leftVal = "SUB";
                }
                
                // 右側：2 が来れば MAIN に変身。それ以外は数字のまま
                if (rightVal == 2) {
                    rightVal = "MAIN";
                }
                
                // 画面の「SIn / SOut:」の右側に「SUB / MAIN」や「0 / MAIN」「SUB / 0」のように合体して表示
                var statusEl = document.getElementById('custom_status');
                if (statusEl) {
                    statusEl.innerText = leftVal + " / " + rightVal;
                }
            }
        }
        window.addEventListener('load', initWebSocket);
    </script>
</body>
</html>
)rawliteral";

// ESP-NOW 受信コールバック
void OnDataRecv(const esp_now_recv_info_t * info, const uint8_t *incomingData, int len) {
  if (len == 20) {
    memcpy(receivedData, incomingData, sizeof(receivedData));
    
    if (receivedData[0] == 99 && receivedData[19] == 88) {
      
      String jsonStr = "";
      for(int i=0; i<20; i++) {
        jsonStr += String(receivedData[i]);
        if(i < 19) jsonStr += ",";
      }
      ws.textAll(jsonStr);

      // PCシリアルモニタ用出力（スマホ画面と同じ個別変換ルールを適用）
      Serial.print("--- Train5 Received Data ---\r\n\r\n");
      Serial.printf("Train Spd1: %d (Raw value)\r\n\r\n", receivedData[1]);
      Serial.printf("Train Spd2: %d (Raw value)\r\n\r\n", receivedData[3]);
      Serial.printf("Train Spd3: %d (Raw value)\r\n\r\n", receivedData[5]);
      Serial.printf("Train Spd4: %d (Raw value)\r\n\r\n", receivedData[7]);
      
      Serial.printf("Train1 Pos: %d | Train2 Pos: %d\r\n", receivedData[9], receivedData[10]);
      Serial.printf("Train3 Pos: %d | Train4 Pos: %d\r\n", receivedData[11], receivedData[12]);
      
      // シリアル用の個別ひらがな/英語変換
      String sinString = String(receivedData[13]);
      String soutString = String(receivedData[14]);
      if (receivedData[13] == 1) sinString = "SUB";
      if (receivedData[14] == 2) soutString = "MAIN";
      
      Serial.print("SIn / SOut: " + sinString + " / " + soutString + "\r\n\r\n");
      
      Serial.printf("Counter   : %d\r\n", receivedData[17]);
      Serial.printf("StartBtn  : %d\r\n", receivedData[18]);
    }
  }
}

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_AP_STA);
  WiFi.softAP(ssid, password);

  if (esp_now_init() != ESP_OK) {
    Serial.print("Error initializing ESP-NOW\r\n");
    return;
  }
  esp_now_register_recv_cb(OnDataRecv);

  ws.onEvent([](AsyncWebSocket *server, AsyncWebSocketClient *client, AwsEventType type, void *arg, uint8_t *data, size_t len){});
  server.addHandler(&ws);
  
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send_P(200, "text/html", index_html);
  });

  server.begin();
  Serial.print("Web Server Started!\r\n");
}

void loop() {
  ws.cleanupClients();
  delay(100);
}