# The I2C protocol

In this task, to achieve our choir of arduinos we need a way for them to communicate with each other.

To our help comes the I2C (*inter-integrated circuit*) protocol - it's a way that two processors can talk to each other over a pair of wires.

The 2 wires are:
 - Clock signal(**SCL**) - it's constantly ticking so that the devices are sincronized
 - Data signal(**SDA**)  - this one goes up and down (0V or 5V) depending on the data that is being transmitted
 
![I2C schematic](../images/i2cd.gif)

The way that the communication works is like this:
 - There is 1 'master' that sends and receives data on the 'bus' to and from the 'slave' devices.
 - The rest of the devices are slaves - they do as they are told by the master;
 - We call it a 'bus' because data travels back and forth;
 - In arduino  the I2C pins are `A4` and `A5`
 - Each slave needs to be assigned a unique ID so that the master can address it specifically.

We will use a library for arduino that provides the I2C implementation and all we need to use is the functions for it. Let's start!

## Instructions for task

You skipped the above section didn't you. Fair enough.

But as Grand Master Yoda once said:
> Patience you must have,
>
> my young padawan.

So be good lad and go back to the top and read it from there so you know what's going on :)

### Now we can really start

Make sure you and your friends have all reached this point. 
 - You will now need to work together to connect each of your Arduinos to the **I2C** bus that we will all build together.
 - There are only 3 connections that need to be made between each arduino. SDA, SCL and GND. The reason ground is in there as well is because we need all the devices to share a common ground connection because otherwise our signal will be unstable and it is possible that it does not work reliably.

The connections to the arduino are as follows:

| I2C Bus pins | Arduino pins | Meaning           | Colours |
|--------------|--------------|-------------------|---------|
| SDA  ->      | A4           | Data              | Green   |
| SCL  ->      | A5           | Clock             | Yellow  |
| GND  ->      | GND          | Ground (Negative) | Black   |

 - Each arduino needs to have all these 3 connections made with it's nearest neighbour;
 - Your job now is to use the huge heap of jumper wires and build links between your desks so that each arduino is connected to the next one and so on.

Need a schematic? Here you go:

![I2C schematic](../images/i2c.png)

 - After you have connected to your neighbours, open and upload the [Task4_Slave.ino sketch](https://github.com/dant14/Delta-sessions/blob/main/Week3/Task4_STAR_WARS_PARTY/Task4_Slave/Task4_Slave.ino).

Ha! You got an error.

 - So here comes your next job. If you remember from above I told you that each slave device needs an address (or ID, whichever you prefer);
 - Now you need to locate the error that has come up on your screen and correct it with a suitable ID. The IDs we will use this session will be: `1, 2, 3, 4, 5`
 - Each of you will need to pick one - just pop your hand up now and I will tell you exactly which ID to use;
 - Now you should correct the line in the sketch that is causing the error - replace the bogus value with a correct ID number;

Another timely quote from Master Yoda:
> Clear your mind must be, 
>
> if you are to find the villains behind this plot.

 - Verify & Upload.
 
 ## Let the music play
 
 Now you need to speak to your mate who is in charge of the Master Arduino and get him to fire his code up.
 
 It is likely that wires may be crossed somewhere and you are not hearing anything. Work together to find where the break might be.
 
 Now sit back and enjoy the concert.
 
 ## Add lights to the music!
 
 Pop an LED on the breadboard (if you do not have one there already) and put some code in that will make it flash with the music! 
 
 You should remember how to do that from last weeks lessons. If you have forgotten just go back to Week2 folder and remind yourself.
 
