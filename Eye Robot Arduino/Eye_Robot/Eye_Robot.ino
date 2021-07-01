int btn= 13 ;
int power = 7 ;
int led1 = 3 ;
int led2 = 11 ;
int i ;
void setup() {
  pinMode(power,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(btn,INPUT);

}

void loop() {

 int x = analogRead(A0);
 
 if (x>=250) {
  digitalWrite(power,1);
  for (i =170 ; i<=255 ; i++){
   analogWrite(led1,i);
   analogWrite(led2,i);
   delay(5);   
  }
  for ( i =255 ; i>=170 ; i--){
   analogWrite(led1,i);
   analogWrite(led2,i);
   delay(5);  
  }
 }
 else {
  digitalWrite(power,0);
  
 }

}
