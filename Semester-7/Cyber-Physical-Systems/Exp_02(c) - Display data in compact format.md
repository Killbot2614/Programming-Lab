# AIM
To create a program that displays data from the sensor in regular intervals in a compact format
# COMPONENTS USED
Arduino Uno, LED, Piezo, Resistor, PIR Sensor
# PROCEDURE
1. Get Arduino Uno, LED, Piezo, Resistor, PIR Sensor from list of components
2. Connect LED(cathode) to GND and then to Piezo(negative)
3. Connect resistor(Terminal 1) to pin 13 and Terminal 2 to LED(anode)
4. Connect Piezo(+ve) to pin -9
5. Connect PIR sensor's signal port to 2, power port to 5V and ground port to GND
# CODE
```
void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
}
void loop()
{
  if (digitalRead(2) >= HIGH) {
    digitalWrite(13, HIGH);
    tone(9, 523, 1000);
  } else {
    digitalWrite(13, LOW);
    noTone(9);
  }
  delay(1);
}

```
# DIAGRAM
![Diagram](/Semester-7/Cyber-Physical-Systems/images/2(c).PNG)
