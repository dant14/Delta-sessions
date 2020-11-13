/*
  Task #4 sketch.

  This sketch is ready for upload. You can use it as a playground to try things out.
  
  Note the pin for the button.
  I have made new functions below the setup() and loop() functions which can be used.
*/

int led_green    = 2;
int led_yellow   = 3;
int led_red      = 4;
int button       = 9; // new pin definition

int buttonState  = HIGH; // this is where we shall store if the button is pressed, why it is set to HIGH we shall explain below

/***************************************************************************************/
// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_red, OUTPUT);


  pinMode(button, INPUT_PULLUP);
  /* 
    Above is the new bit. 
    We need to initalise the button pin as an INPUT because we will be checking constantly if the button is pressed.
    The checking is done in the loop() function in the if() statement a few lines after this one, see it for yourself.
    INPUT_PULLUP - this means we are fixing the state of the pin to be HIGH (pulled-up - 5V); the reason we do this is to
    avoid so called "floating pins" - if a pin is floating that means it could be either 0V or 5V which is dangerous and will
    produce very erratic behaviour of the arduino. 
    When we press the button we connect the pin directly to GND/0V which is logic LOW. 
    More info in if() statement comments below.
  */

  button_sequence(); // we will run this function once so that when the arduino comes alive it's easier to know that is has come alive...
}


/***************************************************************************************/
// the loop function runs over and over again forever
void loop() 
{
  buttonState = digitalRead(button);  
  
  if (buttonState == LOW) // The pin is constantly held at HIGH. When we press the button we force it to LOW hence why we are checking for LOW here.
  {
    button_sequence(); // instead of writing a long sequence here I have seperated it into a different function altogether for readability.
  }
}


/***************************************************************************************/
// you can change the contents of this function
void button_sequence()
{
  for(int i = 0; i < 10; i++) // this will repeat the below sequence 10 times, google "C FOR loops" if you want to know exactly how it works
  {
    digitalWrite(led_red, HIGH);
    delay(40);
    all_leds_OFF();
    digitalWrite(led_yellow, HIGH);
    delay(40);
    all_leds_OFF();
    digitalWrite(led_green, HIGH);
    delay(40);
    all_leds_OFF();
    delay(40);
  }
}


/***************************************************************************************/
// instead of turning off each LED manually every time, I just made a function that turns them all off, it can be used anywhere
void all_leds_OFF()
{
  digitalWrite(led_green, LOW);
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_red, LOW);
}
