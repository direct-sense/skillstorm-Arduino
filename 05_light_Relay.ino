int analogPin = A1;//analog Pin define
int RelayPin = 13;//relay Pin define
int threshold = 150;//upper bound for control relay
int value;

void setup() {  
  Serial.begin(115200);
  pinMode(RelayPin, OUTPUT);//setup output mode
}

void loop() {
  value = analogRead(analogPin);//read analog value
  if(value > threshold)
  {
    Serial.println("Relay is on.");
    digitalWrite(RelayPin, HIGH);//relay on
  }
  else
  {
    Serial.println("Relay is off.");
    digitalWrite(RelayPin, LOW);//relay off
  } 
  
  delay(500);
}
