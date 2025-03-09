// A5 SCL
// A4 SDA
// 5V VCC
// GND GND
#include <Wire.h> // I2C library
#include <LiquidCrystal_I2C.h> // LCD_I2C library

// LCD I2C address，default is 0x27 or 0x3F depend on LCD model
LiquidCrystal_I2C lcd(0x27, 16, 2); 


void setup() {
  // init LCD
  lcd.init();
  lcd.backlight();
}

void loop() {  
  lcd.setCursor(2, 0);//(colum, row)Display from first row and third col 
  lcd.print("arduino uno"); 
  lcd.setCursor(2, 1);// (colum,row)Display from second row and third col
  lcd.print("I2C example");
  delay(5000);
  
  lcd.clear();//clear on LCD model
  delay(100);
  
  lcd.setCursor(2, 0);//(colum, row)Display from first row and third col 
  lcd.print("Hello World!"); 
  lcd.setCursor(2, 1);// (colum,row)Display from second row and third col
  lcd.print("LCD demo!");
  delay(5000);
}
