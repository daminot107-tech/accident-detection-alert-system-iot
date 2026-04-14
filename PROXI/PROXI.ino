int ir=13;
int BUZZER=12;
int p;

void setup() 
{
  Serial.begin(9600);
  pinMode(13,INPUT);
 pinMode(12,OUTPUT);
 
 
}

void loop() 
{
p=digitalRead(ir);
Serial.println(p);
delay(300);

if(p==1)      //Sensor not activated
{
  digitalWrite(12,LOW);
}

else         //Sensor Activated[when x is 0]
{
  digitalWrite(12,HIGH);
}

}

