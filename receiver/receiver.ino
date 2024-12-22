char receivedChar;
int pos = 0;

#define BIT_DELAY 100
#define HALF_BIT_DELAY BIT_DELAY/2
#define TWO_BIT_DELAY BIT_DELAY*2

#define CHAR_DELAY BIT_DELAY*10
#define MSG_DELAY CHAR_DELAY*10

#define DEDECTOR_PIN 7

void setup() {
  Serial.begin(9600);
  pinMode(DEDECTOR_PIN, INPUT);
  // put your setup code here, to run once:

  Serial.println("Listening");  
  pos = 0;
  receivedChar = 0;
}

void loop() {

  // put your main code here, to run repeatedly:

  int dedectorValue = digitalRead(DEDECTOR_PIN);

  if(dedectorValue == LOW && pos == 0)
  {
    delay(HALF_BIT_DELAY);
    pos++;
    return;
  }
  else if(pos == 1)
  {
    if(dedectorValue != LOW)
    {
      pos = 0;
      return;
    }
    else
    {
      Serial.print("s");
      pos++;
      delay(BIT_DELAY);
      return;
    }
  }
  else if(pos > 1)
  {
    if(dedectorValue == LOW)
    {
        receivedChar = receivedChar | (1 << (pos - 2));
        Serial.print("1");  
    }
    else
    {
        Serial.print("0");        
    }
    pos++;
    if(pos >=9)
    {
      pos = 0;
      Serial.print(" ");      
      Serial.println(receivedChar);
      receivedChar = 0; 
      delay(TWO_BIT_DELAY);
      return;
    }
    delay(BIT_DELAY);
  }
}