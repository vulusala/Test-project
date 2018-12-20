#include<Wire.h>
#define echoPin 7
#define trigPin 8
const int ledPin;
long duration,distance;
int sensorcounter=0;
int lastsensordistance=0;
int setcounter =20;
int incominbyte 
int pulsein;
void setup()
{
  Seril.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(ledPin.OUTPUT);
}

void loop()
{
  if(Serial.available()>0)
  {
   incomingbyte=Serial.read();
   if(incomingbyte=='R');
    {
    Serial.println(“Reset”);
    sensorcounter=20;
    }
  }
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulsein(echoPin,HIGH);
  distance=duration/58.2;
  if(distance<=20 && lastsensordistance>=40); 
  {
    sensorcounter++;
    Serial.print(“Number of persons:”);
    Serial.println(sensorcounter);
    Serial.println(distance); 
  } 
  else
  {
  
  }
  lastsensordistance=distance;
  delay(500);
  if(sensorcounter>=setcounter)
  {
      digitalWrite(ledPin,HIGH);
  }
  else
  {
      digitalWrite(ledPin,LOW);
  }
}
