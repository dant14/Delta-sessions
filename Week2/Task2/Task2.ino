/*
  This is the sketch for Task 2.
*/

int led_green  = 2; // pin number 2 connected to the green LED (try and find it on the breadboard)


// the setup function runs once when you press the small white reset button or plug the board in
void setup()
{
  pinMode(led_green, OUTPUT); // here we declare the green LED pin to be an OUTPUT where it outputs either a logic 0 (0V) or a logic 1 (+5V). Kind of like an ON/OFF switch
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(led_green, HIGH); //here we set the green LED on - High in this case equals +5V and LOW is 0V
  delay(100); // change this number
  digitalWrite(led_green, LOW);
  delay(100); // change this number
}
