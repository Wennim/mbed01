#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

void Led1(DigitalOut &ledpin);
void Led3(DigitalOut &ledpin);

int main()
{
   
   while (true)
   {
       myLED = 0;
       myLED2 = 1;
      ThisThread::sleep_for(500ms);
      Led3(myLED2);
      myLED2=0;
      ThisThread::sleep_for(500ms);
      Led1(myLED);
      myLED=0;
      ThisThread::sleep_for(500ms);
  }
}

void Led3(DigitalOut &ledpin)
{
   for (int i = 0; i < 4; i++)
   {                     
      ledpin = !ledpin; 
      ThisThread::sleep_for(500ms);
   }
}

void Led1(DigitalOut &ledpin)
{
   for (int i = 0; i < 3 ;i++)
   {                     
      ledpin = !ledpin; 
      ThisThread::sleep_for(500ms);
   }
}