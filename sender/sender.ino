char val;
int pos = 0;

char *test = "hello world";   
int index = 0;

#define BIT_DELAY 100
#define CHAR_DELAY BIT_DELAY*10
#define MSG_DELAY CHAR_DELAY*10

#define LASER_PIN 7

void setup() {
  Serial.begin(9600);
pinMode(7, OUTPUT);

  // put your setup code here, to run once:

  Serial.println("i");  
  
  pos = 0;
  index = 0;

  laserOff();
  delay(CHAR_DELAY); //1s

}

void loop() {
  // put your main code here, to run repeatedly:

  if(pos == 0){
    laserOn();
    delay(BIT_DELAY); //100ms start b
    val = test[index];
    Serial.print("s ");
    index++;
    pos++;
  }
  else if(pos >= 9)
  {
    Serial.println("i");    
    laserOff();    
    pos = 0;
    delay(CHAR_DELAY);   
     
    if(index > strlen(test))
    {
      Serial.println("str");          
      index = 0;
      delay(MSG_DELAY);   //send message with a 5 second interval
    }    
  }
  else
  {
    if(val & 0x01)
    {
      laserOn();
      Serial.print("1");  

    }
    else
    {
      laserOff();     
      Serial.print("0");      
    }
    val = val >> 1;
    delay(BIT_DELAY);  
    pos++;
  }
}

void laserOn()
{
  digitalWrite(7, HIGH);
}

void laserOff()
{
  digitalWrite(7, LOW);
}  