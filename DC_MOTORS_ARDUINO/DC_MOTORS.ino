 /* Name : Marwan Mohammad Alsharif    
  *  name of project : Motor drive design and implementation for two-wheel robot base
 */

 //Declration of pins of driver(L298N) 
 int IN1 = 7;    
 int IN2 = 6;
 int IN3 = 5;
 int IN4 = 4;
 int ENA = 8;
 int ENB = 3;

 //Two push buttons to change the direction of the motors 
 int btn1 = 12 ;
 int btn2=  13 ;


void setup() {
  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (IN3, OUTPUT);
  pinMode (IN4, OUTPUT);
  pinMode (ENA, OUTPUT);
  pinMode (ENB, OUTPUT);
  pinMode (btn1, INPUT);
  pinMode (btn2, INPUT);

}

void loop() {
  int x1 = analogRead(A0) ;           //Read the vaule of the first potentiometer to control of speed of the first motor 
  int y1 = map(x1,0,1023,100,255) ;   // convert the range between(0~1023) to (100~255 ) 
  int x2 = analogRead(A5) ;           //Read the vaule of the second potentiometer to control of speed of the second motor 
  int y2 = map(x2,0,1023,100,255) ;   // convert the range between(0~1023) to (100~255 )
  int z1= digitalRead(btn1) ;
  int z2= digitalRead(btn2) ;

  if (z1==0 && z2==0) {
  analogWrite(ENA, y1);
  analogWrite(ENB, y2);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
else if (z1==1 && z2==0) {
  analogWrite(ENA, y1);
  analogWrite(ENB, y2); 
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
else if (z1==0 && z2==1) {
  analogWrite(ENA, y1);
  analogWrite(ENB, y2); 
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

else {
  analogWrite(ENA, y1);
  analogWrite(ENB, y2); 
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  
}

}
