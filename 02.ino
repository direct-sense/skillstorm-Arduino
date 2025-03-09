int LED[4] = {3, 6, 9, 11};//four LED Pin define
int s[4] = {0, 32, 128, 255};//single control

void setup() {
  //set output mode for four LEDs 
  for (int i = 0; i < 4; i++)
    pinMode(LED[i], OUTPUT);
}

void loop() {
  //write single value for four difference LEDs
  for (int i = 0; i < 4; i++)
    analogWrite(LED[i], s[i]);
}
