# Delta Week 2 / Task #3 - Activating all the LEDs

This task will be purely practical so don't worry about too much info, this is where the fun begins.

### Goals
In this task:
  - We will turn the rest of the LEDs on and make them blink
  

    
### Let's begin
 
#### Keep the Task2 sketch open from the previous task.

We will now add the declarations for the rest of the LED pins.
 - On line 6, after `int led_green  = 2; // pin...` paste the following code:

```
const int led_yellow = 3;
const int led_red    = 4;
```

These are the rest of the pin declarations.

Next we will set the pinMode - this function sets the pin as either an *Input* or an *Output*. In our case we need to set it to `OUTPUT` +5V to power the rest of the LEDs.

 - So now change the `void setup()` function to look like this (copy-paste):

```
void setup()
{
  pinMode(led_green, OUTPUT); // here we declare the green LED pin to be an OUTPUT where it outputs either a logic 0 (0V) or a logic 1 (+5V). Kind of like an ON/OFF switch
  pinMode(led_yellow, OUTPUT);
  pinMode(led_red, OUTPUT);
}
```

The last thing we need to do is set the pins to `HIGH`.

 - Change the `loop()` function to look like this:
 
 ```
void loop()
{
  digitalWrite(led_green, HIGH); //here we set the green LED on - High in this case equals +5V and LOW is 0V
  digitalWrite(led_yellow, HIGH); //same for yellow
  digitalWrite(led_red, HIGH); //and red
  delay(800);
  digitalWrite(led_green, LOW); //here we set the green LED off
  digitalWrite(led_yellow, LOW); //same for yellow
  digitalWrite(led_red, LOW); //and red
  delay(800);
}
 ```
 
 And you're ready to verify and upload! If you get errors during the verify stage, check you have pasted everything properly. 
 
 For reference here is the full code of the sketch:
 
```
/*
  This is the sketch for Task 2.
*/

int led_green  = 2; // pin number 2 connected to the green LED (try and find it on the breadboard)
const int led_yellow = 3;
const int led_red    = 4;

// the setup function runs once when you press the small white reset button or plug the board in
void setup()
{
  pinMode(led_green, OUTPUT); // here we declare the green LED pin to be an OUTPUT where it outputs either a logic 0 (0V) or a logic 1 (+5V). Kind of like an ON/OFF switch
  pinMode(led_yellow, OUTPUT);
  pinMode(led_red, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(led_green, HIGH); //here we set the green LED on - High in this case equals +5V and LOW is 0V
  digitalWrite(led_yellow, HIGH); //same for yellow
  digitalWrite(led_red, HIGH); //and red
  delay(800);
  digitalWrite(led_green, LOW); //here we set the green LED off
  digitalWrite(led_yellow, LOW); //same for yellow
  digitalWrite(led_red, LOW); //and red
  delay(800);
}
```

#### Now you have all the LEDs working, try and make a traffic light system!

> Hint: start by adding delays with different lenghts between the `digitalWrite` functions like this:

```
  digitalWrite(led_green, HIGH); //here we set the green LED on - High in this case equals +5V and LOW is 0V
  delay(2000);
  digitalWrite(led_yellow, HIGH); //same for yellow
  delay(800);
  digitalWrite(led_red, HIGH); //and red
  delay(2000);
  // the rest is up to you :)
```

> Another Hint: don't forget that you need to switch each LED on/off at various points, if you forget to turn it off you will wonder why nothing is happening!
 
 [To Task #4 - Advanced](https://github.com/dant14/Delta-sessions/tree/main/Week2/Task3)
