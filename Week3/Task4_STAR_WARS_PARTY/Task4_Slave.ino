/*
  Task #4 SLAVE code.

  Find the missing number to fix the bug.
  
*/

#include <Wire.h>

#define SLAVE_ADDR x

typedef unsigned short uint8;
typedef unsigned int   uint16;
typedef unsigned long  uint32;


const int buzzerPin = 8; // Buzzer positive pin

uint32 slaveReceived  = 0UL;
uint16 functionResult = 1U;


void setup()
{
  Serial.begin(9600);                     //Begins Serial Communication at 9600 baud rate
  Wire.begin(SLAVE_ADDR);                 //Begins I2C communication with Slave Address as SLAVE_ADDR at pin (A4,A5)
  Wire.onReceive(receiveEvent);           //Function call when Slave receives value from master
  Wire.onRequest(requestedEvent);           //Function call when Master request value from Slave
}

void loop()
{
  delay(200);
}


void receiveEvent (int howMany)                    //This Function is called when Slave receives value from master
{
  Serial.println(howMany);
  
  uint16 firstByte  = 0U;
  uint16 secondByte = 0U;
  uint16 thirdByte  = 0U;
  uint16 fourthByte = 0U;
  
  firstByte  = Wire.read();
  secondByte = Wire.read();
  thirdByte  = Wire.read();
  fourthByte = Wire.read();
  
//  Serial.println("Slave Received From Master");   //Prints in Serial Monitor 

  uint16 note = ((firstByte << 8)) | secondByte;
  uint16 duration = (thirdByte << 8) | fourthByte;

  Serial.print("NOTE received from Master:     ");
  Serial.println(note);
  Serial.print("DURATION received from Master: ");
  Serial.println(duration);
  beep(note, duration);
}

void requestedEvent()                                //This Function is called when Master wants value from slave
{
  uint16 slaveSend = 255U;
  Wire.write(slaveSend);
}

void beep(int note, int duration)
{
  if (note == 0)
  {
    noTone(buzzerPin);
    delay(duration);
  }
  else
  {
    //Play tone on buzzerPin
    tone(buzzerPin, note, duration);
  }
}
