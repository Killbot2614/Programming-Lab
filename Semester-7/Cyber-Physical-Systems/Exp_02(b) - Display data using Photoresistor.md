# AIM
To pick one-one from the available list of components and create code that will display the sensed data on the PC
# COMPONENTS USED
 Arduino Uno, Multimeter, Photoresistor, Resistor
# PROCEDURE
1. Get Arduino Uno, Multimeter, Photoresistor and Resistor from components
2. Connect multimeter to ground and to pin AO
3. Connect photoresistor to 5V pin and to the resistor
# CODE
```
void setup(){
  pinMode(A0, INPUT);
  Serial.begin(9600);
}
void loop()
{
  int lightvalue=analogRead(A0);
  Serial.println(lightvalue);
  delay(1000);
}
```
# DIAGRAM
![Diagram](/Semester-7/Cyber-Physical-Systems/images/2(b.).PNG)
