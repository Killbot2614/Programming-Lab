# AIM
To write a program for blink LED using TinkerCAD
# COMPONENTS USED
Arduino Uno, LED
# PROCEDURE
1. Get Arduino Uno board from components
2. Get LED from components
3. LED has 2 sides. Positive side is connected to pin 13 of Arduino and Negative is connected to ground
# CODE
```
int pin2=2;
int pin3=3;
int pin4=4;
int pin5=5;
void setup()
{
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
  pinMode(pin5,OUTPUT);
}
void loop()
{
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  digitalWrite(pin5,HIGH);
}
```
# DIAGRAM
![Diagram](/Semester-7/Cyber-Physical-Systems/images/1(a).PNG)
