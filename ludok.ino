#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  randomSeed(analogRead(A0)+analogRead(A1)+analogRead(A2)+analogRead(A3)+analogRead(A4));
  lcd.init();                      // initialize the lcd 
  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Dice Roll::");
  lcd.setCursor(2,1);
  lcd.print(random(1,7));
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
