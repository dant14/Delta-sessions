# Delta Week 2 / Task #1 - Using the Arduino IDE

### Key words 
 - *Repository* - a local or internet-based location where we can store code and other items. What you are looking at now is a repository (repo for short).
 - *README* files - exactly what it means - "read me" - if you see a file called readme then you should read it...
 - *IDE* - Integrated Development Environment - you can think of it as a **text/code editor** that's so smart it can also compile your code and in our case even upload it to the device. Clever right?
 - *Sketch* - This is an arduino specific way of saying *Source code file* - this is where we will write code for the arduinos, in sketches
 - *Compile* - verb - the process where the arduino program takes the code and internally chews it up and produces binary files that the device can understand - you'd be shocked to know that pure C code is completely useless to microcontrollers - they need a "compiler" to transform the code we have written into a massive list of 1's and 0's (0010101110101010101111111111010101010101010101...and on it goes)

## Introduction
Welcome back guys. Hope you had a decent half-term break. This week we will be hitting the road with the highly anticipated "programming of the arduino" part which I know you have all been itching to do. Due to the fact that I am required to quarantine until next Thursday means that I cannot be with you in person but Mr Rass has kindly set up the ICT room so I can help you remotely should you have difficulties with the software. 

Therefore this session will be more of a follow-the-instructions type of session where you will be reading throught this page and the other similar ones in the other Task folders. Access these **README** worksheets from your internet browsers (Chrome or whatever else you usually use). DO NOT read them directly by downloading the files and opening them on your PCs as they won't be formatted properly and will look weird.

The reason I am not simply providing you with the usual word file is because engineers don't use these very often when they are documenting code. Here on this website - GitHub - this is the most common way to provide instructions on how to use the code that is in a particular repository.

This is what I'll be doing now - I am providing you with instructions on how to use the code I have uploaded. In this specific case our first sketch (code file) is **Task1.ino**

In this session you will be provided with readily assembled circuits - I would normally let you build them by yourselves but due to my in-person absence this week I have prepared them ready for you. 
> ### **PLEASE DO NOT REMOVE ANY OF THE COMPONENTS FROM THE BREADBOARD FOR THIS SESSION**.

Sorry for the caps but if you move something and it stops working I cannot help you by simply looking at your screen. So please refrain from changing anything on the breadboard unless I specifically instruct you to do so in the session.

### Goals
In this task:
  - We will be getting familiar with the Arduino IDE (what's this - check the [key words](key-words) section).
  - We will upload our first sketch to the arduino to activate the Green LED.
  - We will learn the basics of the C programming language which is used in the arduino sketches.


## Session #1 Recap
Last week we had some fun learning a few basics about electricity and using that knowledge we powered some LEDs on our breadboards. Here is a quick recap:
  - Breadboards:
    
    ![Vertical power rails](../images/verticalpower.png)

    ![Horizontal rows](../images/horizontal-rows.png)

  - LEDs:
    - Longer leg is positive, shorter is negative; I have bent the positive legs with two 90&deg; angles so that it's easier to identify
    - They do not offer much resistance so they need a resistor in series with them
