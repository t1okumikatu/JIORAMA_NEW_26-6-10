#ifndef CONSTANT_H
#define CONSTANT_H
uint8_t data[30]={99,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,88};
uint8_t broadcastAddress[] = {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF};
//esp_now_peer_info_t peerInfo = {};//型宣言
const unsigned long RESET_PRESS_TIME = 3000; // ★3秒以上でリセットモード
#define CHANNEL 0
#define PIN_PE7 25          //PIN_PE7 51 LoopFlag(時間)>>>mega21
byte Poji22  = 0;
byte Poji32  = 0;
byte Train1G = 0;
byte Train2G = 0;
byte Train3G = 0;
byte Train4GS = 0;
byte Train1GS= 0;
byte Train2GS= 0;
byte Train3GS= 0;
byte Train4G = 0;
byte T1MS    = 0;
byte T1SS    = 0;
byte T2MS    = 0;
byte T2SS    = 0;
byte T3MS    = 0;
byte T3SS    = 0;
byte T4MS    = 0;
byte T4SS    = 0;
//~~~~~~
//ADC-monita/===========
const byte LED_MPIN = 0;  // LED_motor-B
String ledState;
int restart=0;
const int adcPin = 34;
const int R1 = 5100;
const int R2 = 2000;
float voltage;
//ADC-monita/===========
#define StartSW 13
#define PIN_PE0 4          // Servo In/HIGH=>Sub  LOW=>Main   nano=19
#define PIN_PE2 23         // Servo Out/HIGH=>Sub LOW=>Main   nano=5
#define PIN_PE1 18          // LOOP-Servo In/SUB/MAIN
#define PIN_PE3 19          // LOOP-Servo Out/SUB/MAIN
#define servoInt 15
#define NANO_reset 27
byte ServoInFlag  = 0;       // ServoInFlag(0:Sub, 1:Main)
byte ServoOutFlag1 = 0;    // ServoOutFlag(0:Sub, 1:Main)
byte ServoOutFlag2 =0;
byte SubTimeResetFlag  = 0;  // SetTimeResetフラグ
byte MainTimeResetFlag = 0;  // SetTimeResetフラグ
byte Data6Flag=0;
byte startFlag=0;
byte startFlag21=0;
byte startFlag31=0;
byte startFlag22=0;
byte startFlag32=0;
byte peerFlag=0;
String Termination,SInPoji,Train, Hedder,mTrain;
int  Train1, Train2, Train3,Train4;
String Train1s, Train2s, Train3s,Train4s;
int Stop1, Stop2, Stop3, Stop4;
int Slow1, Slow2, Slow3, Slow4;
int s1,m1,f1;
int s2,m2,f2;
int s3,m3,f3;
int s4,m4,f4;
//===================
int Data1;//Train1
int Data2;//Train2
int Data3;//Train3
int Data4;//Train4

int Data8;//Main
int Main2=0;

boolean direction = 0;
//====================
// Flag
volatile int Train1Flag10=0;
volatile int Train2Flag10=0;
volatile int Train3Flag10=0;
volatile int Train4Flag10=0;
volatile int Train1Flag13=0;
volatile int Train2Flag13=0;
volatile int Train3Flag13=0;
volatile int Train4Flag13=0;
volatile int Train1Flag15D1=0;
volatile int Train1Flag15D2=0;
volatile int Train2Flag15D1=0;
volatile int Train2Flag15D2=0;
volatile int Train3Flag15D1=0;
volatile int Train3Flag15D2=0;
volatile int Train4Flag15D1=0;
volatile int Train4Flag15D2=0;

volatile int compete=0;
volatile int Train1TimeSetFlag1=0;
volatile int Train2TimeSetFlag2=0;
volatile int Train3TimeSetFlag3=0;
volatile int Train4TimeSetFlag4=0;
volatile int Train1Flag1=0;
volatile int Train2Flag2=0;
volatile int Train3Flag3=0;
volatile int Train4Flag4=0;

volatile int TrainFlag21=0;
volatile int TrainFlag31=0;

volatile int Data5Flag1=1;
volatile int Data5Flag2=1;
volatile int Data5Flag3=1;
volatile int Data5Flag4=1;
//
volatile int Train1Flag22=0;
volatile int Train1Flag32=0;
volatile int Train2Flag22=0;
volatile int Train2Flag32=0;
volatile int Train3Flag22=0;
volatile int Train3Flag32=0;
volatile int Train4Flag22=0;
volatile int Train4Flag32=0;
//
volatile int Train1delayFlag22=0;//start優先
volatile int Train2delayFlag22=0;//start優先
volatile int Train3delayFlag22=0;//start優先
volatile int Train4delayFlag22=0;//start優先
volatile int Train1delayFlag32=0;//start優先
volatile int Train2delayFlag32=0;//start優先
volatile int Train3delayFlag32=0;//start優先
volatile int Train4delayFlag32=0;//start優先
volatile int Train1sesor10Flag1=0;
volatile int Train2sesor10Flag2=0;
volatile int Train3sesor10Flag3=0;
volatile int Train4sesor10Flag4=0;

// Timer 
unsigned long nowTime;       // 現在時刻 
unsigned long nowTimeOld;
unsigned long SubSetTime=0;    // "4""5""12"スタート時刻
unsigned long MainSetTime=0;    // "4""5""12"スタート時刻

unsigned long SubSetTime22=0;   // "32"スタート時刻　＊
unsigned long MainSetTime32=0;   // "32"スタート時刻　＊
unsigned long SubStartTime22=0;
unsigned long MainStartTime32=0;
unsigned long Sub=0;   // "32"スタート時刻　＊
unsigned long Main=0;   // "32"スタート時刻　＊
unsigned long SubSetTime21=0;    // "21"スタート時刻
unsigned long MainSetTime31=0;    // "21"スタート時刻
unsigned long Time21=0;    // "21"スタート時刻
unsigned long Time31=0;    // "21"スタート時刻
unsigned long Timecompete=0;
unsigned long SubSetTime4=0; 
unsigned long SubSetTime5=0;
unsigned long SubSetTime6=0; 
unsigned long SubSetTime7=0;
unsigned long SubSetTime8=0; 
unsigned long SubSetTime9=0;
unsigned long SubSetTime10=0; 
unsigned long SubSetTime11=0; 
unsigned long MainSetTime11=0; 
unsigned long SubSetTime12=0; 
unsigned long MainSetTime12=0; 
unsigned long SubSetTime13=0;   // "31"スタート時刻　＊
unsigned long MainSetTime13=0;   // "31"スタート時刻　＊
unsigned long SubSetservoTime13=0;
unsigned long Time22=0;
unsigned long Time32=0;
unsigned long Time822=0;
unsigned long Time832=0;
unsigned long count22=0;
unsigned long count32=0;
unsigned long count22Flag=0;
unsigned long count32Flag=0;
unsigned long MainServoTime32;
unsigned long SubServoTime22;
int SubServoTime22Flag=0;
int control_Flag1=0;
int control_Flag2=0;
int startFlag1=0;//start優先
int startFlag2=0;//start優先
int startFlag3=0;//start優先
int startFlag4=0;//start優先
int MainServoTime32Flag=0;
int cont = 0;             // 時間配列カウント(22 & 32)
int Lcont = 0;            // 時間配列カウント(10)
int lpcnt=0;
int lpcnt2=0;
int mc;
uint8_t FB_LIght=13; 
uint8_t ctr=0; 
uint8_t IN=0;   //servo In  Data5 1-sub 2-main
uint8_t OUT=0;  //servo Out Data6 1-sub 2-main
uint8_t Data7=0;   //sub_start   1  MAIN_start  2 
uint8_t Send1=0;
uint8_t y=0; 
uint8_t Send2=0;
uint8_t z=0; 
uint8_t Send3=0;
uint8_t v=0; 
uint8_t Send4=0;
uint8_t w=0; 
uint8_t startbutton=1;
#endif

