#include<Servo.h>
Servo ir_servo; Servo flip_servo;
float page_val[5]; int ir = 9;
int motor_pushr = 7; int motor_pushl = 8; int skip;

void sense(){
  for(int i=0; i<5; i++){
      flip_servo.write(i);
      for (int j = 0; j <= 110; j++){ir_servo.write(j); delay(10);}
          page_val[i] = pulseIn(ir,HIGH);
          ir_servo.write(0);}
}

void pusher(){
  int result = page_val[0];
  for(int i = 0; i<5; i++){if(result<page_val[i]){result=i;}; if(page_val[i]==-1){skip++;};}
  page_val[result]=-1;
  flip_servo.write(result-skip); skip=0;
       digitalWrite(motor_pushl,LOW); digitalWrite(motor_pushr,HIGH); 
       delay(100); digitalWrite(motor_pushr,LOW); digitalWrite(motor_pushl,HIGH);
       delay(100); digitalWrite(motor_pushl,LOW);
  flip_servo.write(0);
}

void setup() {
ir_servo.attach(11); flip_servo.attach(12); skip=0;
pinMode(ir,INPUT); pinMode(motor_pushr,OUTPUT); pinMode(motor_pushl,OUTPUT);
sense();
for(int i = 0; i<5; i++){pusher();}
}

void loop() {
}
