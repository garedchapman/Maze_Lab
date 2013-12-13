Maze_Lab
========
This lab uses the previous libraries involving PWM signals to turn motors of a robot, and also the IR sensors of the robot. The 
program implements logic based on sensor values to navigate a maze. The motors are altered in ways that allow the robot 
to turn left and right, and move forward.
Using a PWM signal that is stronger on the right motor, the robot naturally moves toward the left wall.
The stronger right motor is implemented by
making the duty cycle on thay motor larger than the left.
Upon encountering a wall in front of the robot, the robot turns right sharply so as to continue following the left wall.
Also, while the robot hooks left naturally, there is the possibility that it wil run into a wall on the right side, in which case the robot will turn sharply similarly to the way it turns when the front sensor detects a wall.
