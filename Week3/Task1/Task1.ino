/*
  Welcome to week 3 task 1.
  In this sketch we shall see a simple example of a serial transmission 
  where you will be able to read the output on your screen.

  We will also beep THE BUZZER a couple of times 
  so that you can see that the arduino can make some noise too.
*/

const int buzzerPin = 8; // Buzzer positive pin
int stopFlag = 0;

void setup() 
{
  Serial.begin(9600); // Starting Serial Terminal
}


void loop()
{
  if (stopFlag == 0)
  {
    Serial.println("Hi!!");
    delay(500);
    Serial.println("My name is Arduino :)");
    delay(1000);
    Serial.println("Beep, beep!");

  
    beep(700, 300); // first number is the frequency in HZ, second one is the duration of the beep in milliseconds
    delay(500);
    beep(700, 300);
    stopFlag = 1;
  }
}

void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
}
