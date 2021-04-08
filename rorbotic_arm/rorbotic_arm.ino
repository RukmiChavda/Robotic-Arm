#include<Servo.h>          // servo moter Library 

// defining servo name 
Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;
Servo s6;

// potentiometer pin defining 
int p1=A0;
int p2=A1;
int p3=A2;
int p4=A3;
int p5=A4;
int p6=A5;

// varaibles for reading poteentiometer's value
int v1;
int v2;
int v3;
int v4;
int v5;
int v6;

void setup() 
{
  s1.attach(3);
  s2.attach(5);
  s3.attach(6);
  s4.attach(9);
  s5.attach(10);
  s6.attach(11);
}

void loop() 
{
 v1=map(analogRead(p1),0,1023,0,360);
 s1.write(v1);
 delay(10);
    
 v2=map(analogRead(p2),0,1023,0,180);
 s2.write(v2);
 delay(10);

 v3=map(analogRead(p3),0,1023,0,180);
 s3.write(v3);
 delay(10);

 v4=map(analogRead(p4),0,1023,0,180);
 s4.write(v4);
 delay(10);

 v5=map(analogRead(p5),0,1023,0,180);
 s5.write(v5);
 delay(10);
 
 v6=map(analogRead(p6),0,1023,0,180);
 s6.write(v6);
 delay(10);
}
