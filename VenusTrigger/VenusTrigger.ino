
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

