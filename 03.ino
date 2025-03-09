int LED_W = 11;//Pin define
int s = 255;//single control

void setup() {
  //setup output mode
  pinMode(LED_W, OUTPUT);
}

void loop() {
  //write single value
  analogWrite(LED_W, s);
  
  //single control decrease 5
  s = s - 5;
  delay(50);
  
  //if single < 0 then increment to 250
  if(s <= 0 )
  {
    for(s = 0; s <= 250; s+=5)
    {
      analogWrite(LED_W, s);
      delay(50);
    }
  }
}
