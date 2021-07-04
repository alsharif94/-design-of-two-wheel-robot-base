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


![image](https://user-images.githubusercontent.com/85449693/124282107-1ff74780-db53-11eb-849b-182533c34457.png)



Depending on the table shown above, the two motors will move, change direction, or stop

•	Arduino code

1.	First, we will determine the pins of L298N with Arduino as shown below


![image](https://user-images.githubusercontent.com/85449693/124377150-23a1e000-dcb3-11eb-8181-3472183c4ede.png)

2.	Two push buttons to change the direction of the motors 

![image](https://user-images.githubusercontent.com/85449693/124377161-39afa080-dcb3-11eb-98dc-39b5d7d42eca.png)


3.	Define the Arduino pins as either input or output

![image](https://user-images.githubusercontent.com/85449693/124377183-4fbd6100-dcb3-11eb-809b-eed2b2ad450e.png)

4.	Define variables to read the value of the potentiometers and variables to convert it to an appropriate value as input in RNA and RNB for L298N and others to read the value of the push button (high or low) to change the direction of the DC motors

![image](https://user-images.githubusercontent.com/85449693/124377193-62379a80-dcb3-11eb-9549-e23b53a9167d.png)














