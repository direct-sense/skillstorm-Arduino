int analogPin = A1; //analog Pin define
int value;

void setup() {
  Serial.begin(115200);
}

 

void loop() {
  value = analogRead(analogPin); //read analog value
  Serial.println(value); //show the value on Serial window
  delay(500); //delay 0.5 second
}
