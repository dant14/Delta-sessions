/*
  Task #4 MASTER
*/


#include <Wire.h>

#define ACK 255U
#define TEMPO_DELAY 100U

typedef unsigned int  uint16;
typedef unsigned long uint32;

const uint16 c = 261;
const uint16 d = 294;
const uint16 e = 329;
const uint16 f = 349;
const uint16 g = 391;
const uint16 gS = 415;
const uint16 a = 440;
const uint16 aS = 455;
const uint16 b = 466;
const uint16 cH = 523;
const uint16 cSH = 554;
const uint16 dH = 587;
const uint16 dSH = 622;
const uint16 eH = 659;
const uint16 fH = 698;
const uint16 fSH = 740;
const uint16 gH = 784;
const uint16 gSH = 830;
const uint16 aH = 880;

const uint16 partOneTones[] = { a,   a,   a,   f,   cH,  a,   f,   cH,  a,   0   };
const uint16 partOneTimes[] = { 500, 500, 500, 350, 150, 500, 350, 150, 650, 500 };
const uint16 arraySize_One  = sizeof(partOneTones)/sizeof(partOneTones[0]);

const uint16 part2Tones[] = { eH,  eH,  eH,  fH,  cH,  gS,  f,   cH,  a,   0   };
const uint16 part2Times[] = { 500, 500, 500, 350, 150, 500, 350, 150, 650, 500 };
const uint16 arraySize_2  = sizeof(part2Tones)/sizeof(part2Times[0]);

// after part 5 repeat part 3 and part 4 then go to part 8 //////////////////////////////////
const uint16 part3Tones[] = { aH,  a,   a,   aH,  gSH,  gH, fSH, fH,  fSH, 0   };
const uint16 part3Times[] = { 500, 300, 150, 500, 325, 175, 100, 100, 250, 325 };
const uint16 arraySize_3  = sizeof(part3Tones)/sizeof(part3Times[0]);

const uint16 part4Tones[] = { aS,  dSH, dH,  cSH, cH,  b,   cH,  0   };
const uint16 part4Times[] = { 250, 500, 325, 175, 100, 100, 250, 350 };
const uint16 arraySize_4  = sizeof(part4Tones)/sizeof(part4Times[0]);
// these two to be repeated after 5                       //////////////////////////////////

const uint16 part5Tones[] = { f,   gS,  f,   a,   cH,  a,   cH,   eH, 0   };
const uint16 part5Times[] = { 250, 500, 350, 125, 500, 375, 125, 650, 500 };
const uint16 arraySize_5  = sizeof(part5Tones)/sizeof(part5Times[0]);

const uint16 part8Tones[] = { f,   gS,  f,   cH,  a,   f,   cH,  a,   0   };
const uint16 part8Times[] = { 250, 500, 375, 125, 500, 375, 100, 650, 650 };
const uint16 arraySize_8  = sizeof(part8Tones)/sizeof(part8Times[0]);

const int buzzerPin = 8; // Buzzer positive pin
uint32 MasterSend = 0UL;

void setup()
{
  Serial.begin(9600);                        //Begins Serial Communication at 9600 baud rate
  Wire.begin(1);                              //Begins I2C communication at pin (A4,A5)
}

void loop()
{
  Wire.requestFrom(2,1);                     // request 1 int from slave arduino (2)
  int masterReceive = Wire.read();          // receive an int from the slave arduino and store in MasterReceive
  if(masterReceive == ACK)
  {
    playSong();
  }
//  Serial.println("Master sent:");
//  Serial.println(MasterSend, HEX);
//  MasterSend++;
  
  delay(100000UL);
}

void playSong()
{
  for (int i = 0; i < arraySize_One; i++)
  {
    sendToneToBePlayed(partOneTones[i], partOneTimes[i], 2, 0);
  }
 
  for (int i = 0; i < arraySize_2; i++)
  {
    sendToneToBePlayed(part2Tones[i], part2Times[i], 3, 0);
  }

  for (int i = 0; i < arraySize_3; i++)
  {
    sendToneToBePlayed(part3Tones[i], part3Times[i], 2, 0);
  }

  for (int i = 0; i < arraySize_4; i++)
  {
    sendToneToBePlayed(part4Tones[i], part4Times[i], 3, 0);
  }

  for (int i = 0; i < arraySize_5; i++)
  {
    sendToneToBePlayed(part5Tones[i], part5Times[i], 2, 0);
  }

  for (int i = 0; i < arraySize_3; i++)
  {
    sendToneToBePlayed(part3Tones[i], part3Times[i], 3, 0);
  }

  for (int i = 0; i < arraySize_4; i++)
  {
    sendToneToBePlayed(part4Tones[i], part4Times[i], 2, 1);
    delay(10);
    sendToneToBePlayed(part4Tones[i], part4Times[i], 3, 1);
    delay(part4Times[i] + TEMPO_DELAY);
  }

  for (int i = 0; i < arraySize_8; i++)
  {
    sendToneToBePlayed(part8Tones[i], part8Times[i], 2, 1);
    delay(10);
    sendToneToBePlayed(part8Tones[i], part8Times[i], 3, 1);
    delay(part8Times[i] + TEMPO_DELAY);
  }

}

void sendToneToBePlayed(uint16 note, uint16 duration, int slaveAddr, int delayOFF)
{
  MasterSend = combinedDataToSend(note, duration);
  byte sendArray[4];
  
  sendArray[0] = (MasterSend >> 24) & 0xFF;
  sendArray[1] = (MasterSend >> 16) & 0xFF;
  sendArray[2] = (MasterSend >> 8) & 0xFF;
  sendArray[3] = MasterSend & 0xFF;
  
  Wire.beginTransmission(slaveAddr);         // start transmit to slave arduino with address as param
  Wire.write(sendArray, 4);                  // first param is the array, second one is size
  Wire.endTransmission();                    // stop transmitting
  if (delayOFF == 1)
  {
    delay(1);
  }
  else
  {
    delay(duration + TEMPO_DELAY);
  }
}

// first 4 bytes are the tone, second 4 bytes are the delay

uint32 combinedDataToSend(uint16 firstByte, uint16 secondByte)
{
    uint32 result = 0x0U;

    result = (result | ((uint32)firstByte << 16U));
    result = (result | secondByte);
    
    return result;
}
