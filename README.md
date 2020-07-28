# AIR HOCKEY ROBOT
##### Shrishti'20, IITR
## Images of the project
1. Table isometric view 1
![Table isometric view 1](https://user-images.githubusercontent.com/68807083/88667192-a8c56200-d0fe-11ea-8249-519fb2419034.jpg)
2. Table isometric view 2 
![Table isometric view 2](https://user-images.githubusercontent.com/68807083/88667204-ac58e900-d0fe-11ea-921f-a25de0228811.jpg)
## Abstract
 To create an autonomous gaming system of air hockey where one player is human and other side will be played by a bot. The bot will automatically detect the position of the moving puck at every instant and defend or strike accordingly. The aim is to set up difficulty levels as well whose control will be subject to the human player.
 
## Motivation
 The importance of a game's experience depends on how much general interest it can generate. In today's digital era almost every gamer is fascinated by a tinge of innovation and technology in ordinary gaming consoles. As a result this idea of Air Hockey Robot would definitely serve the purpose. And nevetheless, to give a kickstart to the interests of freshers like us in robotics, this proposal is a perfect opportunity for us to learn.
 The mechanism used here to move the defender is inspired by 3D printer mechanism.

## Components
 1. MS rods X 6
 2. Timing belt and gears 
 3. MDF board 6X8(feet)
 4. Linear bearings (8mm)
 5. Light dependent resistors(LDRs)
 6. DC motors x 2
 7. Rotary encoder x 2
 8. Arduino MEGA 
 9. Cytron motor driver 
 10. 12V DC power adapter x 1  
 11. Electrical wires
 12. Breadboard
 
## Mechanical aspect of the design

### Structure
 1. The table top(design below) or the actual playing area is made of MDF board to be supported by the sides made of plyboard. On MDF board holes are drilled so as to insert LDR from the back side. A total of three 2-rod frames are used which allows the defender to cover its half completely.
 2. 3D printed frame(design below) connected through 2 rods for holding encoders and DC motors.
 ![Side frame type1](https://user-images.githubusercontent.com/68807083/88667544-238e7d00-d0ff-11ea-845e-cb732a518fd7.jpg)
 3. Defender(design below) which actually plays the game and does the job of hitting the puck.
 ![Defender](https://user-images.githubusercontent.com/68807083/88667478-0ce82600-d0ff-11ea-8cc2-49220d121cac.jpg)
 4. 3D printed L frame(design below) which slides over side rods, holds encoder and DC motor and is used to connect the two transversal rods on which defender slides.![L frame](https://user-images.githubusercontent.com/68807083/88667526-1d989c00-d0ff-11ea-81d8-4d7cfd483a9a.jpg)

### Movements
 The defender traverses distances on metal rods with the help of linear bearings of size 8mm.
##### Transversal movement:
 The defender is directly attached to a 6mm timing belt which in turn is attached to a DC motor with the help of a gear. It moves the defender on two rods firmly attached to a frame.
##### Longitudinal movement:
 The whole two rod frame moves on another pair of two rod frame attached on both sides of the table till half its length. This frame is also attached to a DC motor through a timing belt from one side which ensures the longitudinal movement of the bot

## Electronic aspest of the design

### Power
 The motor driver is directly powered by a 12V DC power adapter.

### Sensors 
 1. The table top is snared with a LDR grid consisting of 4 rows, each row consisting of different no. of LDR. The sensors are placed in determined order.
 2. Rotary encoders are synchronized with each motor. It is used to get the coordinate feedback of defender at every instant.

### Actuators
 Johnson DC motors are used for traversal of the defender over the rods.

### Controllers
 1. Arduino MEGA is used as a microcontroller board.
 2. Cytron motor driver is used to control DC motors.

### Functionality
 1. As soon as a LDR sensor is devoid of room light which means the puck is directly above it, it sends a signal to the microcontroller.
 2. Arduino MEGA is so programmed to identify that particular sensor and instruct the motor driver to start the DC motors to bring the defender in longitudinal alignment with the puck while staying back and hit it with a force as soon as it crosses the first row of sensors.

## Arduino code
 1. We have recognized each sensor as a memory place in a 2D array. We have numbered each LDR and measured its distance from the origin (which is a longitudinal centreline) like a 1D numberline as shown below. Refer to src file.
 ![LDR setup figure](https://user-images.githubusercontent.com/68807083/88666808-318fce00-d0fe-11ea-8741-c41be6cc9d71.jpg)
 2. Function 'movemotor' comprises a switch statement and has three arguments. a) a: takes switch case, b) across: takes the transversal displacement, c) forward: takes the longitudinal displacement. This function is called whenever any LDR sends signal of pucks presence and the parameters are passed accordingly to align the defender longitudinaly with the puck. The forward parameter is zero untill the puck crosses row 3. After row 3 is crossed forward parameter has a value and the motor move the defender forward by that value to hit the puck.
 3. Function 'encoder1' and 'encoder2' keeps track of the rotation of motor 1 and motor 2 respectively and feedbacks the coordinates of the defender.      

## Workflow chart
 ![workflow chart](https://user-images.githubusercontent.com/68807083/88667786-723c1700-d0ff-11ea-91a0-9e963118dab7.jpg)
## Cost structure
![cost](https://user-images.githubusercontent.com/68807083/88667966-a44d7900-d0ff-11ea-9c41-c59edc657d8f.jpg)
## Application 
 1.  Gaming parlours
 2.  Shopping malls: can be installed as quick game challenges 
 3.  Hostels: enjoyment for students 
 4.  Houses: as a personal gaming machine

## Limitation 
 1.  The bot cannot exactly predict the trajectory of the puck. And therefore it is unable to hit the puck in a particular direction.
 2.  It is not competent enough to detemine the velocity of the puck so as to hit it with a specific force.
 3.  No plans regarding the introduction of the difficulty level option is executed till now.
 
## Future improvements 
 1.  LCD display module can be installed to interact with the bot like setting up difficulty level, counting scores etc.
 2.  Image processing can be incorporated to contemplate trajectories.
 
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
1.  https://howtomechatronics.com/arduino-projects/
2.  https://howtomechatronics.com/tutorials/arduino/rotary-encoder-works-use-arduino/
3.  https://www.solidworks.com 
4.  https://www.arduino.cc/

