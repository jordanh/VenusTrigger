/*
 VenusTrigger

 A simple sketch to actuate the closure of a
 venus flytrap leaf using a simple circuit.

 Wait to receive a character on the serial port,
 then cause pin 2 to go high for 5 seconds. 

 Distributed under the GPLv2 public license.

 Author: jordan.husney@gmail.com
 (c) 2013
 */

int incomingByte = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  digitalWrite(2, LOW);  
}

void loop()
{
  Serial.print("Waiting for keypress: ");
  while (Serial.available() == 0) {
    // Just hang out;
  }
  
  incomingByte = Serial.read();
  Serial.println("triggered!");
  
  digitalWrite(2, HIGH);
  delay(5000);
  digitalWrite(2, LOW);
}

