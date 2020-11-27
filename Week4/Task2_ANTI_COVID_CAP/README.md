# Delta Week 4 / Task #2 - Raise an alarm every time you try to touch your face


# RULES FOR THIS SESSION - READ CAREFULLY!!
Due to the fact that we have dangerous equipment in the room today I would like you to get familiar with the following ground rules before we start:

#################

### DO NOT leave your desks without asking for permission first. This is because each of you will have a go with the soldering iron STRICTLY UNDER MY SUPERVISION and any distractions such as people walking around the room aimlessly can result in serious and painful burns.

#################

### DO NOT attempt anything that you have NOT been instructed to do by me while using the soldering equipment - misuse can result in painful burns and further injuries.

#################

### If you are not at the soldering station DO NOT try to distract your friends who are using the equipment by making unnecessary noise or jokes as this may result in them getting hurt.

#################

### If you break any of these rules I will imediately shut off the equipment and no one will be allowed to use it any more, which will ruin the fun for everyone else. So please respect these rules for your own safety and your friends safety, so that everyone can enjoy this session.

#################

## Task #2 Goals

> Please read the above rules properly before you move on.

 - In this session we will build a cap that can detect when you try and touch your face. 

 - I won't be explaining any extra science behind it because we will be using sensors and LEDs that we have been made familiar with in the previous sessions.

 - The code from the sketch can be uploaded directly to your arduinos and will work without any modifications. If you want to improve it - be my guest.

 - One more thing before we start - keep in mind that you shouldn't permanently fix the arduinos to your caps because I will still be taking the kits home and you can keep your caps. If you want to take a kit home then come and speak to me and I will try and make an arrangement with the school to provide you with one.

## Instructions

At this point I will introduce each one of you seperately to the soldering station. I will spend between 5-10 mins with each person while they have a go at building their battery harness and soldering an LED to a resistor, after which they will swap with the next person.

We will be powering the arduino with a 9V battery. There is another very important rule for you here:

### DO NOT plug the 9V battery anywhere else on the arduino apart from the VIN and GND pins!! If you aren't careful and plug it in somewhere else you may permanently damage the arduino! Arduino is only rated at 5V!

In order to have a working cap you need to:
 - have a cap that you brought from home
 - solder the battery harness with my supervision
 - upload the sketch to your arduino
 - take the arduino off your breadboard - please ask me to do this because it's very easy to bend and break the pins
 - connect the arduino pins WITHOUT the breadboard - only using jumper wires - according to the tables below
 - use your creative self to figure out how to attach it to your cap using the materials in the box
 - have fun trying to touch your nose! (D)
 
 
For the connections: (attach the battery last)

| LED pins                     | Arduino pins |
|------------------------------|--------------|
| Positive leg  -> resistor -> | D5           |
| Negative leg  ->             | GND rail*    |


| Ultrasonic sensor pins | Arduino pins |
|------------------------|--------------|
| VCC  ->                | +5V          |
| Echo ->                | D6           |
| Trig ->                | D7           |
| GND  ->                | GND rail*    |


| Buzzer pins       | Arduino pins |
|-------------------|--------------|
| Positive leg  ->  | D8           |
| Negative leg  ->  | GND rail*    |


| Battery pins | Arduino pins |
|--------------|--------------|
| Red    ->    | VIN          |
| Black  ->    | GND          |


* The GND rail is a little adaptor for pins that you can use to connect multiple GND wires to a single arduino pin. I will provide you with one when you get to that point.
