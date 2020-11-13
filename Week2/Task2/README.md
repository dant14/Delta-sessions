# Delta Week 2 / Task #2 - Introduction to C

Friendly reminder:

> ### **PLEASE DO NOT REMOVE ANY OF THE COMPONENTS FROM THE BREADBOARDS FOR THIS SESSION**.
Do so only if instructed by me.

## Introduction 
The C language is the most popular coding language for non-website applications (sometimes even used for those!). It can be simple yet also very complex.

Fortunately for you guys the Arduino has made it as simple as can be. It provides many libraries that mostly do everything for you, you just need to know which functions to use.

Enough talk.

### Goals
In this task:
  - We will modify some code to make the green LED blink.
  - We will be getting familiar with basic C language concepts and syntax.
  

    
### Let's begin
 - Close your previous sketch (no need to save it).

 - Go to the folder you downloaded and find the Task2 folder and open it.

 - Now open *Task2.ino* .

### Upload the Task2 sketch
 - Verify the sketch with the first button at the top (like we did in Task #1). 

 - After you see the 'Done compiling' message upload it to the board. 

Is the green LED blinking?

### Play around with the delay time

Let's change the delay time in the On/Off sequence:

*(line numbers can be found in Arduino sketches by clicking on the wanted line and looking at the number in the lower left corner of the window)*

Line 17-20:
```
digitalWrite(led_green, HIGH); //here we set the green LED on - High in this case equals +5V and LOW is 0V
delay(100);
digitalWrite(led_green, LOW);
delay(100);
```

Above we have the `delay(100);` function. Delay simply means 'wait' and number is in milliseconds. 

Therefore `delay(1000);` wil mean 'do nothing for 1 second'. 

 - Try it out by changing the `100` value to `1000` in both `delays`, then verify it and upload it.

Can you see the difference in the blinking?

 - Now try to change that value to make it blink at different speeds - what's the fastest you can make it blink?

## C language basics

In this section you will not need to do anything, just try and read it to grasp a bit of a basic understanding of the coding language we will be using as it will come in useful later. 

> Don't worry if you don't remember it all, I'll be here to help if you need me!

Let's take a dive into the sketch:

### Functions
The `delay()` that you just modified is called a function. In arduino this is what we call a built-in function.

You don't see where it comes from you know from other arduino experts what it does (Google).

> Functions are the main building block for all programming languages. An experienced engineer can write clear and simple functions to create complex, easy-to-read programs.

So we know that the `delay(100)` function takes 1 parameter which is a simple integer - in this case 100 - that represents milliseconds. That's it.

### Line syntax
Did you notice the `;` in the `delay(1000);`?

If that was not there you will get an error when you verify. Try it by removing the `;` and verifying!

> This semicolon is essential in C - we use it to seperate one operation from the next. One of the most common mistakes in C is to forget to put a semicolon at the end of your line. Don't worry, it won't explode, it'll just give you an error.

### Comments

Let's look at line 1-3: 
```
/*
  This is the sketch for Task 2.
*/
 ```
 
 Notice how we start with `/*` and end with `*/`. Anything between these two is just a note to self. In *C* this is called a "*Comment*". We use comments to leave ourselves helpful notes in the code. 
 
 > *Comments don't affect our program.*
 
 There is another type of comment which can only be applied to one line: `//` This means that everything after this `//` will be ignored by the compiler until the next line begins. See line 5: 
 
 `const int led_green  = 2; // pin number 2 connected to the green LED (try and find it on the breadboard)`
 
 ### Variable declarations
 Let's take another look at this same line 5:
 
 `int led_green  = 2; // pin number ...`
 
 We will break this statement down.
 
 `int` is the C way of declaring an integer. Immediately after that comes the variable name.
 
 `led_green` -  this is our variable name. It can be whatever we want it to be but the rule of thumb is to make it as short and obvious as possible.
 
 ` = 2;` - here we assign a value to our variable. In this case we have connected our LED to Pin number 2 so this will be the value of our variable. Note the semicolon separator.
 
 `// pin number 2 connected...` - this is a single line comment. We covered these in the previous section.
 
 
 ### Arduino basic functions
 You will have noticed there are 2 main functions in our sketch - `void setup()` and `void loop()`.
 
 `void` is how we declare a function that does not return any result at the end.
 
 The setup function looks like this:
 ```
 void setup()
 {
 ... // the contents here run only once
 }
 ```
 
 The contents in the "body" of this function are found between the curly brackets (also known as braces) - `{ /*body of function goes here*/ }`. The `setup()` function is where we declare and initialise items that we will need to use later in the sketch.
 
Now for the `loop` function - this function runs infinately and repeats itself about 1 million times per second if there is nothing inside to slow it down (like a `delay` function).
```
 void setup()
 {
 ... // the contents here run repeatedly forever until the power to the arduino is cut
 }
 ```
 
 #### Enough C for now, let's move on to making the arduino do more fun things with the LEDs
 
 [To Task #3](https://github.com/dant14/Delta-sessions/tree/main/Week2/Task3)
