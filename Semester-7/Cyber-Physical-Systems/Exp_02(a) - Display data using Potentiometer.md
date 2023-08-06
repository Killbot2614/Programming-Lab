# AIM
To pick one-one from the available sensors and actuators and find or create code that will display the sensed data on the PC
# COMPONENTS USED
Arduino Uno, Potentiometer, Breadboard
# PROCEDURE
1. Get Arduino Uno board from components
2. Get Potentiometer from components
3. Potentiometer has 3 sides. Terminal 1 is ground, T2 is input signal, T3 is output signal
# CODE
```
int pot=A0;
void setup()
{
 Serial.begin(9600);
}
void loop()
{
  int potvalue=analogRead(pot);
  Serial.print("potvalue");
  Serial.println(potvalue);
  delay(10);
}
```
# DIAGRAM
![Diagram](/Semester-7/Cyber-Physical-Systems/images/2(a).PNG)
