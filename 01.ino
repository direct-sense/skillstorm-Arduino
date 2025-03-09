//LED Pin define
int LED_G = 6;
int LED_Y = 9;
int LED_R = 11;

void setup() {
  // set output mode for three LEDs
  pinMode(LED_G, OUTPUT);
  pinMode(LED_Y, OUTPUT);
  pinMode(LED_R, OUTPUT);
}

void loop() {
  digitalWrite(LED_G, 1);//Green LED on
  digitalWrite(LED_Y, 0);//Yellow LED off
  digitalWrite(LED_R, 0);//Red LED off
  delay(2000);// delay 2 second

  digitalWrite(LED_Y, 1);//Yellow LED on
  digitalWrite(LED_R, 0);//Red LED off
  digitalWrite(LED_G, 0);//Green LED off
  delay(500);// delay 0.5 second

  digitalWrite(LED_R, 1);//Red LED on
  digitalWrite(LED_Y, 0);//Yellow LED off
  digitalWrite(LED_G, 0);//Green LED off
  delay(2000);// delay 2 second
}
