//#include <Vector.h>
#include <SoftwareSerial.h>
#include "letter.h"
SoftwareSerial hc06(0,1);
#define Led5 2
#define Led4 3
#define Led0 4
#define Led2 11
#define Led3 12
#define Led1 13
#define button 10
int16_t readData = 0, i = 0;

void setup() 
{
  Serial.begin(9600);
  Serial.println("słowo:");
  hc06.begin(9600);
  pinMode(Led0, OUTPUT);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  digitalWrite(Led0, LOW);
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, LOW);
  digitalWrite(Led3, LOW);
  digitalWrite(Led4, LOW);
  digitalWrite(Led5, LOW);
  pinMode(button, INPUT_PULLUP);    
}

void loop() 
{
 String zdanie = ""; 
 if(hc06.available()>0)
 {
   zdanie=Serial.readStringUntil('\n');
   zdanie.toLowerCase();
    
   Letters x(zdanie);
   for(int j=0;j<zdanie.length();j++)
   {
      Braille *y = x.table[j];
      for(int i=0; i<6;i++)
      {
        Serial.println(y->table[i]);
      }

      
      while(digitalRead(button) == HIGH)
      {
        readData = (analogRead(A0))/8;
        i++;
        if(i == 110) i = 0;
             
        if(i < readData)
        {
          
          if(y->table[0]==1)
          {
            digitalWrite(Led0, HIGH);
          }
          if(y->table[1]==1)
          {
            digitalWrite(Led1, HIGH);
          }
          if(y->table[2]==1)
          {
            digitalWrite(Led2, HIGH);
          }
          if(y->table[3]==1)
          {
            digitalWrite(Led3, HIGH);
          }
          if(y->table[4]==1)
          {
            digitalWrite(Led4, HIGH);
          }
          if(y->table[5]==1)
          {
            digitalWrite(Led5, HIGH);
          }
        }
        else
        {
          digitalWrite(Led0, LOW);
          digitalWrite(Led1, LOW);
          digitalWrite(Led2, LOW);
          digitalWrite(Led3, LOW);
          digitalWrite(Led4, LOW);
          digitalWrite(Led5, LOW);
        }
      }
      
    digitalWrite(Led0, LOW);
    digitalWrite(Led1, LOW);
    digitalWrite(Led2, LOW);
    digitalWrite(Led3, LOW);
    digitalWrite(Led4, LOW);
    digitalWrite(Led5, LOW);
    delay(1000);
 }
 }

}

void blinkAll()
{
  digitalWrite(Led0, HIGH);
  digitalWrite(Led1, HIGH);
  digitalWrite(Led2, HIGH);
  digitalWrite(Led3, HIGH);
  digitalWrite(Led4, HIGH);
  digitalWrite(Led5, HIGH);
  delay(1000);
  digitalWrite(Led0, LOW);
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, LOW);
  digitalWrite(Led3, LOW);
  digitalWrite(Led4, LOW);
  digitalWrite(Led5, LOW);
}
