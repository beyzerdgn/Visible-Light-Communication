#define bits 8
const int txnDelay=50;    //pulse width in ms
const int ref =80;        //ldr HIGH cutoff val

int a[bits];   //array that stores received data as int
int val=0;

void setup() {
  Serial.begin(9600);
  pinMode(7,INPUT);
}

void loop() {
  val = analogRead(A0);
  if(val>ref){
    startListening();
    printChar(a);
  }
}

//reads the incoming signal and stores to a[] array
void startListening(){
  delay(3*txnDelay/2);      //this delay waits till we are at middle of second bit
  for(int i=0;i<bits;i++){
    val = analogRead(A0);
    if(val>ref) a[i]=1;
    else a[i]=0;
    delay(txnDelay);
  }
}


//a very simple binay to decimal convertor
void printChar(int x[bits]){-
  int num= a[0]*128 + a[1]*64 + a[2]*32 + a[3]*16 +a[4]*8 +a[5]*4 +a[6]*2 +a[7];
  //printing the corresponding char val
  Serial.print((char)num);    
}