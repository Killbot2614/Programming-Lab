AIM: To write a program for blink LED using TinkerCAD
COMPONENTS USED: Arduino Uno, LED
PROCEDURE:
1.Get Arduino Uno board from components
2.Get LED from components
3.LED has 2 sides. Positive side is connected to pin 13 of Arduino and Negative is connected to ground
CODE:
void setup(){
 pinMode(13,OUTPUT);}
void loop(){
 digitalWrite(13,HIGH);
 delay(1000);
 digitalWrite(13,LOW);
 delay(1000);}
