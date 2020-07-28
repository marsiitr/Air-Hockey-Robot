# AIR HOCKEY ROBOT
##### Shrishti'20, IITR
## Images of the project
1. Table isometric view 1

2. Table isometric view 2 

## Abstract
 To create an autonomous gaming system of air hockey where one player is human and other side will be played by a bot. The bot will automatically detect the position of the moving puck at every instant and defend or strike accordingly. The aim is to set up difficulty levels as well whose control will be subject to the human player.
 
## Motivation
 The importance of a game's experience depends on how much general interest it can generate. In today's digital era almost every gamer is fascinated by a tinge of innovation and technology in ordinary gaming consoles. As a result this idea of Air Hockey Robot would definitely serve the purpose. And nevetheless, to give a kickstart to the interests of freshers like us in robotics, this proposal is a perfect opportunity for us to learn.
 The mechanism used here to move the defender is inspired by 3D printer mechanism.

## Components
 ⚙ MS rods X 6
 ⚙ Timing belt and gears 
 ⚙ MDF board 6X8(feet)
 ⚙ Linear bearings (8mm)
 ⚙ Light dependent resistors(LDRs)
 ⚙ DC motors x 2
 ⚙ Rotary encoder x 2
 ⚙ Arduino MEGA 
 ⚙ Cytron motor driver 
 ⚙ 12V DC power adapter x 1  
 ⚙ Electrical wires
 ⚙ Breadboard
 
## Mechanical aspect of the design
### Structure
 ⚙  The table top(design below) or the actual playing area is made of MDF board to be supported by the sides made of plyboard. On MDF board holes are drilled so as to insert LDR from the back side. A total of three 2-rod frames are used which allows the defender to cover its half completely.
 ⚙  3D printed frame(design below) connected through 2 rods for holding encoders and DC motors.
 ⚙  Defender(design below) which actually plays the game and does the job of hitting the puck.
 ⚙  3D printed L frame(design below) which slides over side rods, holds encoder and DC motor and     is used to connect the two transversal rods on which defender slides.

### Movements
 The defender traverses distances on metal rods with the help of linear bearings of size 8mm.
##### Transversal movement:
 The defender is directly attached to a 6mm timing belt which in turn is attached to a DC motor with the help of a gear. It moves the defender on two rods firmly attached to a frame.
##### Longitudinal movement:
 The whole two rod frame moves on another pair of two rod frame attached on both sides of the table till half its length. This frame is also attached to a DC motor through a timing belt from one side which ensures the longitudinal movement of the bot

## Electronic aspest of the design
### Power
 The motor driver is directly powered by a 12V DC power adapter 
### Sensors 
 ⚙ The table top is snared with a LDR grid consisting of 4 rows, each row consisting of different    no. of LDR. The sensors are placed in determined order.
 ⚙ Rotary encoders are synchronized with each motor. It is used to get the coordinate feedback of   defender at every instant.
### Actuators
 Johnson DC motors are used for traversal of the defender over the rods.
### Controllers
 ⚙ Arduino MEGA is used as a microcontroller board.
     We have numbered each LDR and measured its distances from the origin (which is a longitudinal centreline) like a 1D numberline. Figure below.
 ⚙ Cytron motor driver is used to control DC motors.
### Functionality
 ⚙ As soon as a LDR sensor is devoid of room light which means the puck is directly above it,it     sends a signal to the microcontroller.
 ⚙ Arduino MEGA is so programmed to identify that particular sensor and instruct the motor          driver to start the DC motors to bring the defender in longitudinal alignment with the puck     while staying back and hit it with a force as soon as it crosses the first row of sensors.

## Workflow chart
 
## Cost structure

## Application 
 ⚙  Gaming parlours
 ⚙  Shopping malls: can be installed as quick game challenges 
 ⚙  Hostels: enjoyment for students 
 ⚙  Houses: as a personal gaming machine

## Limitation 
 ⚙  The bot cannot exactly predict the trajectory of the puck. And therefore it is unable to hit      the puck in a particular direction.
 ⚙  It is not competent enough to detemine the velocity of the puck so as to hit it with a            specific force.
 ⚙  No plans regarding the introduction of the difficulty level option is executed till now.
 
## Future improvements 
 ⚙  LCD display module can be installed to interact with the bot like setting up difficulty          level, counting scores etc.
 ⚙  Image processing can be incorporated to contemplate trajectories.
 
## Team members
1. Mohit Singh
2. Naman Agarwalla
3. Naman Pesricha
4. Ojus Thool
5. Pranav Kumar
6. Rishita

## Mentors 
1. Tabish Madni
2. Yashutosh Bansal

## References
 ⚙  https://howtomechatronics.com/arduino-projects/
 ⚙  https://howtomechatronics.com/tutorials/arduino/rotary-encoder-works-use-arduino/
 ⚙  https://www.solidworks.com 
 ⚙  https://www.arduino.cc/

