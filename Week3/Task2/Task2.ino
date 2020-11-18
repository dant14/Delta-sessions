/*
  Task #2.

  Here we are going to use ultrasound to measure distance. Enjoy.
*/

const int trigPin = 7; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6; // Echo Pin of Ultrasonic Sensor
const int buzzerPin = 8; // Buzzer positive pin

int counter = 0;

void setup() {
   Serial.begin(9600); // Starting Serial Terminal
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
}

void loop() {
   long duration, inches, cm;
   
   digitalWrite(trigPin, LOW);
   delayMicroseconds(2);
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin, LOW);
   
   duration = pulseIn(echoPin, HIGH);
   inches = microsecondsToInches(duration);
   cm = microsecondsToCentimeters(duration);
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();
   delay(100);
   if (cm > 500)
   {
    //do nothing because this is the stable range of the sensor
   }
   else
   {
      beep(700, cm);
   }
}

long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}

void beep(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
}
