/*
  The COVID safe cap. Stay safe guys
*/

const int ledPin = 5;    // LED pin
const int echoPin = 6;   // Echo Pin of Ultrasonic Sensor
const int trigPin = 7;   // Trigger Pin of Ultrasonic Sensor
const int buzzerPin = 8; // Buzzer positive pin

int counter = 0;

void setup() {
   Serial.begin(9600); // Starting Serial Terminal
   pinMode(trigPin, OUTPUT);
   pinMode(echoPin, INPUT);
   pinMode(ledPin, OUTPUT);
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
   else if (cm < 20) // here we detect that your hand is trying to get to your face
   {
     // making some noise here
     chatter1();
     chatter2();
     chatter1();
     chatter2();
     noTone(buzzerPin);
     delay(1000);
   }
   else
   {
      digitalWrite(ledPin, LOW);
//      beep(700, cm);
   }
}


void chatter1() {
    
    int k = random(1000,2000);
    digitalWrite(ledPin, HIGH);  
    for (int i = 0; i <= random(100,2000); i++){
        
        tone(buzzerPin, k+(-i*2));          
        delay(random(.9,2));             
    } 
    digitalWrite(ledPin, LOW);   
    for (int i = 0; i <= random(100,1000); i++){
        
        tone(buzzerPin, k + (i * 10));          
        delay(random(.9,2));             
    }
}

void chatter2() {
    
    int k = random(1000,2000);
    digitalWrite(ledPin, HIGH);  
    for (int i = 0; i <= random(100,2000); i++){
        
        tone(buzzerPin, k+(i*2));          
        delay(random(.9,2));             
    } 
    digitalWrite(ledPin, LOW);   
    for (int i = 0; i <= random(100,1000); i++){
        
        tone(buzzerPin, k + (-i * 10));          
        delay(random(.9,2));             
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
