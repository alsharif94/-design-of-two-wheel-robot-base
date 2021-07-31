# -design-of-two-wheel-robot-base with eyes of the robot 


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


5.	Write the code for the instructions shown in the table above, to move, change the direction or stop the two DC motors


![image](https://user-images.githubusercontent.com/85449693/124377212-885d3a80-dcb3-11eb-9958-dba331bc0f5b.png)







Battery charging circuit

The schematic diagram 


![image](https://user-images.githubusercontent.com/85449693/124377219-9743ed00-dcb3-11eb-8341-09968c4ba4ea.png)


Basic tools

1.	AC source(220V,60Hz)
2.	Transformer 
3.	Diode bridge 
4.	Capacitor 
5.	Voltage regulator (LM7805)
6.	LED) optional (



Operating steps
1.	Connect the transformer to the AC voltage source


![image](https://user-images.githubusercontent.com/85449693/124377238-b0e53480-dcb3-11eb-9a60-d7295e7c0e93.png)



2.	After that use, the diode bridge to convert AC to DC voltage 

![image](https://user-images.githubusercontent.com/85449693/124377260-ce1a0300-dcb3-11eb-91fb-64a44ef5bc5e.png)


3.	The capacitor is used to remove ripples of DC voltage of diode bridge 

![image](https://user-images.githubusercontent.com/85449693/124377276-dd00b580-dcb3-11eb-9b39-2d3f723c3ac0.png)

4.	Use a voltage regulator (LM7805) to keep the output voltage constant to charge the battery to the required value(5v)

![image](https://user-images.githubusercontent.com/85449693/124377289-eb4ed180-dcb3-11eb-9768-30f5f53ca118.png)




Robot eyes design


•	Schematic diagram 

![image](https://user-images.githubusercontent.com/85449693/124377337-2224e780-dcb4-11eb-945a-1d7d075aed65.png)



Basic tools

1.	Light Dependent Resistor (LDR)

![image](https://user-images.githubusercontent.com/85449693/124378967-12f66780-dcbd-11eb-8daa-0c2a2551f6fe.png)


2.	Resistors 

![image](https://user-images.githubusercontent.com/85449693/124378983-273a6480-dcbd-11eb-8071-b9fc51d3b04a.png)

3.	LEDs

![image](https://user-images.githubusercontent.com/85449693/124378990-34575380-dcbd-11eb-98d7-7ce899e98da7.png)

4.	Transistors (BC547)

![image](https://user-images.githubusercontent.com/85449693/124379012-446f3300-dcbd-11eb-979a-fd619092fb2a.png)


5.	Arduino 

![image](https://user-images.githubusercontent.com/85449693/124379022-518c2200-dcbd-11eb-8e4f-52027bbd6958.png)


6.	Capacitors 

![image](https://user-images.githubusercontent.com/85449693/124379042-68cb0f80-dcbd-11eb-9baa-944b3080d418.png)



Arduino Code 


![image](https://user-images.githubusercontent.com/85449693/124379115-be9fb780-dcbd-11eb-8032-ac59df5a7604.png)


Operating steps

1.	Program the Arduino by using the above code

2.	Connect the circuit as shown in the schematic diagram 


3.	LDR enables you to turn on the eye in the dark area by manipulating the value of the voltage applied to it and choosing the appropriate resistance connected to it

4.	Arduino can be replaced with a battery if you do not want to control the eyes






