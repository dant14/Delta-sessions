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
  - We will be getting familiar with basic C language concepts and syntax.
  - We will modify some code to make the green LED blink.

    
### Let's begin
Close your previous sketch (no need to save it).

Go to the folder you downloaded and find the Task2 folder and open it.

Now open *Task2.ino* .
 
Let's inspect the contents of this sketch:

*(line numbers can be found in Arduino sketches by clicking on the wanted line and looking at the number in the lower left corner of the window)*

Line 1-3: 
```
/*
  This is the sketch for Task 2.
*/
 ```
 
 Notice how we start with `/*` and end with `*/`. In C this is called a "*Comment*". We use comments to leave ourselves helpful notes in the code. 
 
 Comments don't affect our program.
 
 There is another type of comment which can only be applied to one line: `//` This means that everything after this `//` will be ignored by the compiler until the next line begins. See line 5: 
 
 `const int led_green  = 2; // pin number 2 connected to the green LED (try and find it on the breadboard)`
 
 
 [To Task #3](https://github.com/dant14/Delta-sessions/tree/main/Week2/Task2)
