/*
  Welcome to Delta week 2 session.
  In this session we will learn some C language basics and begin to upload and run code on your Arduinos.
  Task 1 is to get you started with the basics. 
  The code does not need to be edited and will compile when you paste it directly into the Arduino IDE (Integrated Development Environment)

*/

const int led_green  = 2;


// the setup function runs once when you press the small white reset button or plug the board in
void setup()
{
  pinMode(led_green, OUTPUT); // here we declare the green LED pin to be an OUTPUT where it outputs either a logic 0 (0V) or a logic 1 (+5V). Kind of like an ON/OFF switch
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(led_green, HIGH); //infintely run this loop where we set the green LED on - High in this case equals +5V and LOW is 0V
}
