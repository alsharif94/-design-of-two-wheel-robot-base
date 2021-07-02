# -design-of-two-wheel-robot-base


Introduction

In this task, we will design a two-wheel robot base. It is one of the most important tasks that we will deal with another type of motor, which is DC motor. In this project, I will control two DC motors for the movements of the wheels and to facilitate control, we will use a special module that makes it easier for us to control the motors and change directions. It is necessary to determine the type of battery suitable for the motors, so I will choose the battery and the appropriate size for the motors to work, and also, I will design the battery charging circuit that enables us to charge the battery in the case that the battery becomes uncharged. Finally, I will design the eyes of the robot by designing the circuit for the LEDs, and perhaps I will use the Arduino to use PWM, which will provide great power to the LEDs and increase the life span.


Control of DC motors 

•	L298 DC motor driver module 


![image](https://user-images.githubusercontent.com/85449693/124281709-a95a4a00-db52-11eb-8403-dc18a209ecdb.png)


Using L298N, you can control the speed and direction of two motor, but it is important to use Arduino, which will send signals to L298N, and depending on the transmitted signals, the direction and speed of the two motors will change. 

•	Schematic diagram 

![image](https://user-images.githubusercontent.com/85449693/124281889-dc9cd900-db52-11eb-9ab5-93e5be9450c7.png)


•	Steps and Explanation


Depending on the table shown above, the two motors will move, change direction, or stop

