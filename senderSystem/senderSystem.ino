

const byte bins[][8]={

  {0,0,0,0,0,0,0,0},
  {0,0,0,0,0,0,0,1},
  {0,0,0,0,0,0,1,0},
  {0,0,0,0,0,0,1,1},
  {0,0,0,0,0,1,0,0},
  {0,0,0,0,0,1,0,1},
  {0,0,0,0,0,1,1,0},
  {0,0,0,0,0,1,1,1},
  {0,0,0,0,1,0,0,0},
  {0,0,0,0,1,0,0,1},
  {0,0,0,0,1,0,1,0},
  {0,0,0,0,1,0,1,1},
  {0,0,0,0,1,1,0,0},
  {0,0,0,0,1,1,0,1},
  {0,0,0,0,1,1,1,0},
  {0,0,0,0,1,1,1,1},
  {0,0,0,1,0,0,0,0},
  {0,0,0,1,0,0,0,1},
  {0,0,0,1,0,0,1,0},
  {0,0,0,1,0,0,1,1},
  {0,0,0,1,0,1,0,0},
  {0,0,0,1,0,1,0,1},
  {0,0,0,1,0,1,1,0},
  {0,0,0,1,0,1,1,1},
  {0,0,0,1,1,0,0,0},
  {0,0,0,1,1,0,0,1},
  {0,0,0,1,1,0,1,0},
  {0,0,0,1,1,0,1,1},
  {0,0,0,1,1,1,0,0},
  {0,0,0,1,1,1,0,1},
  {0,0,0,1,1,1,1,0},
  {0,0,0,1,1,1,1,1},
  {0,0,1,0,0,0,0,0},
  {0,0,1,0,0,0,0,1},
  {0,0,1,0,0,0,1,0},
  {0,0,1,0,0,0,1,1},
  {0,0,1,0,0,1,0,0},
  {0,0,1,0,0,1,0,1},
  {0,0,1,0,0,1,1,0},
  {0,0,1,0,0,1,1,1},
  {0,0,1,0,1,0,0,0},
  {0,0,1,0,1,0,0,1},
  {0,0,1,0,1,0,1,0},
  {0,0,1,0,1,0,1,1},
  {0,0,1,0,1,1,0,0},
  {0,0,1,0,1,1,0,1},
  {0,0,1,0,1,1,1,0},
  {0,0,1,0,1,1,1,1},
  {0,0,1,1,0,0,0,0},
  {0,0,1,1,0,0,0,1},
  {0,0,1,1,0,0,1,0},
  {0,0,1,1,0,0,1,1},
  {0,0,1,1,0,1,0,0},
  {0,0,1,1,0,1,0,1},
  {0,0,1,1,0,1,1,0},
  {0,0,1,1,0,1,1,1},
  {0,0,1,1,1,0,0,0},
  {0,0,1,1,1,0,0,1},
  {0,0,1,1,1,0,1,0},
  {0,0,1,1,1,0,1,1},
  {0,0,1,1,1,1,0,0},
  {0,0,1,1,1,1,0,1},
  {0,0,1,1,1,1,1,0},
  {0,0,1,1,1,1,1,1},
  {0,1,0,0,0,0,0,0},
  {0,1,0,0,0,0,0,1},
  {0,1,0,0,0,0,1,0},
  {0,1,0,0,0,0,1,1},
  {0,1,0,0,0,1,0,0},
  {0,1,0,0,0,1,0,1},
  {0,1,0,0,0,1,1,0},
  {0,1,0,0,0,1,1,1},
  {0,1,0,0,1,0,0,0},
  {0,1,0,0,1,0,0,1},
  {0,1,0,0,1,0,1,0},
  {0,1,0,0,1,0,1,1},
  {0,1,0,0,1,1,0,0},
  {0,1,0,0,1,1,0,1},
  {0,1,0,0,1,1,1,0},
  {0,1,0,0,1,1,1,1},
  {0,1,0,1,0,0,0,0},
  {0,1,0,1,0,0,0,1},
  {0,1,0,1,0,0,1,0},
  {0,1,0,1,0,0,1,1},
  {0,1,0,1,0,1,0,0},
  {0,1,0,1,0,1,0,1},
  {0,1,0,1,0,1,1,0},
  {0,1,0,1,0,1,1,1},
  {0,1,0,1,1,0,0,0},
  {0,1,0,1,1,0,0,1},
  {0,1,0,1,1,0,1,0},
  {0,1,0,1,1,0,1,1},
  {0,1,0,1,1,1,0,0},
  {0,1,0,1,1,1,0,1},
  {0,1,0,1,1,1,1,0},
  {0,1,0,1,1,1,1,1},
  {0,1,1,0,0,0,0,0},
  {0,1,1,0,0,0,0,1},
  {0,1,1,0,0,0,1,0},
  {0,1,1,0,0,0,1,1},
  {0,1,1,0,0,1,0,0},
  {0,1,1,0,0,1,0,1},
  {0,1,1,0,0,1,1,0},
  {0,1,1,0,0,1,1,1},
  {0,1,1,0,1,0,0,0},
  {0,1,1,0,1,0,0,1},
  {0,1,1,0,1,0,1,0},
  {0,1,1,0,1,0,1,1},
  {0,1,1,0,1,1,0,0},
  {0,1,1,0,1,1,0,1},
  {0,1,1,0,1,1,1,0},
  {0,1,1,0,1,1,1,1},
  {0,1,1,1,0,0,0,0},
  {0,1,1,1,0,0,0,1},
  {0,1,1,1,0,0,1,0},
  {0,1,1,1,0,0,1,1},
  {0,1,1,1,0,1,0,0},
  {0,1,1,1,0,1,0,1},
  {0,1,1,1,0,1,1,0},
  {0,1,1,1,0,1,1,1},
  {0,1,1,1,1,0,0,0},
  {0,1,1,1,1,0,0,1},
  {0,1,1,1,1,0,1,0},
  {0,1,1,1,1,0,1,1},
  {0,1,1,1,1,1,0,0},
  {0,1,1,1,1,1,0,1},
  {0,1,1,1,1,1,1,0},
  {0,1,1,1,1,1,1,1}
};




#define LED 7      //pin t0 send signal to laser
#define bits 8

const int txnDelay=50;      //pulse width
void setup() {
  Serial.begin(9600);
  pinMode(7,OUTPUT);
  Serial.println("Ready to Send");
}

void loop() {
  //reading char from serial monitor and passing it to sendChar() one by one
  if(Serial.available() > 0) {
    while(Serial.available() > 0) {
      int n =  Serial.read();
      if(n >= 0){
         sendChar((char)n);
         delay(txnDelay);
        }
      }
    }
  }


void sendChar(char c){
  Start();  //it sends the first sync bit
  for(int i=0;i<bits;i++){
    Send(bins[c][i]);
  }
}

//1 as HIGH and 0 as LOW
void Send(int k){
  if(k==1){
    digitalWrite(LED,HIGH);
    delay(txnDelay);
    digitalWrite(LED,LOW);
  }
  else{
    delay(txnDelay);
  }
}

void Start(){
    digitalWrite(LED,HIGH);
    delay(txnDelay);
    digitalWrite(LED,LOW);
}