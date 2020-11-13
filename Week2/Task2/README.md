# Delta Week 2 / Task #2 - Introduction to C

Friendly reminder:

> ### **PLEASE DO NOT REMOVE ANY OF THE COMPONENTS FROM THE BREADBOARDS FOR THIS SESSION**.
Do so only if instructed by me.

### Key words 
 - *Compile* - verb - the process where the arduino program takes the code and internally chews it up and produces binary files that the device can understand - you'd be shocked to know that pure C code is completely useless to microcontrollers - they need a "compiler" to transform the code we have written into a massive list of 1's and 0's (0010101110101010101111111111010101010101010101...and on it goes)

## Introduction 
The C language is the most popular coding language for non-website applications (sometimes even used for those!). It can be simple yet also very complex.

Fortunately for you guys the Arduino has made it as simple as can be. It provides many libraries that mostly do everything for you, you just need to know which functions to use.

Enough talk.

### Goals
In this task:
  - We will modify some code to make the green LED blink.
  - We will be getting familiar with basic C language concepts and syntax.
  

    
### Let's begin
Close your previous sketch (no need to save it).

Go to the folder you downloaded and find the Task2 folder and open it.

Now open *Task2.ino* .

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

Let's take a dive into the sketch:

### Functions
The `delay()` that you just modified was is called a function. In arduino this is what we call a built-in function.

You don't see where it comes from you know from other arduino experts what it does (Google).

> Functions are the main building block for all programming languages. An experienced engineer can write clear and simple functions to create complex, easy-to-read programs.

So we know that the `delay(100)` function takes 1 parameter which is a simple integer - in this case 100 - that represents milliseconds. That's it.

### Line syntax
Did you notice the `;` in the `delay(1000);`?

If that was not there you will get an error when you verify. Try it by removing the `;`!

This semicolon is essential in C - we use it to seperate one operation from the next. One of the most common mistakes in C is to forget to put a semicolon at the end of your line. Don't worry, it won't explode, it'll just give you an error.

### Comments

Let's look at line 1-3: 
```
/*
  This is the sketch for Task 2.
*/
 ```
 
 Notice how we start with `/*` and end with `*/`. In C this is called a "*Comment*". We use comments to leave ourselves helpful notes in the code. 
 
 > *Comments don't affect our program.*
 
 There is another type of comment which can only be applied to one line: `//` This means that everything after this `//` will be ignored by the compiler until the next line begins. See line 5: 
 
 `const int led_green  = 2; // pin number 2 connected to the green LED (try and find it on the breadboard)`
 
 ### Variable declarations
 
 ### Arduino basic functions
 
 
 [To Task #3](https://github.com/dant14/Delta-sessions/tree/main/Week2/Task2)
