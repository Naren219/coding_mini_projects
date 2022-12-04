
#include <LiquidCrystal.h>
 
#define trigger 18
#define echo 19
 
LiquidCrystal lcd(2,3,4,5,6,7);
 
float time=0,distance=0;
int motor = 3;
int start = 0;

void setup()
{
 pinMode(motor, OUTPUT);
 lcd.begin(16,2);
 pinMode(trigger,OUTPUT);
 pinMode(echo,INPUT);
 time=pulseIn(echo,HIGH);
 distance_static=time*340/20000;
 lcd.print(" Is it coming?");
 delay(2000);
}
 
void loop()
{
 analogWrite(motor, start);
 lcd.clear();
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 digitalWrite(trigger,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 time=pulseIn(echo,HIGH);
 distance=time*340/20000;
 lcd.clear();

 delay(1000);
}

bool iscoming() 
{
  if (distance_static > distance) {
    for (int i = 0; i < 5
      lcd.print("Incoming");
      delay(quick);
      lcd.clear();
      delay(quick);
    l
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(1000);                       
    digitalWrite(LED_BUILTIN, LOW);  
    delay(1000); 
    while (start < 55) {
      start += 10;
    }
  }
}
