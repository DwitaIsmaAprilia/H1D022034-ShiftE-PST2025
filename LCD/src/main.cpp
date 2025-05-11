#include <Arduino.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 26, 2);
int SDA_PIN = D3;  // GPIO16
int SCL_PIN = D4;  // GPIO5

void setup() {
 Wire.begin(SDA_PIN, SCL_PIN);
 lcd.init();
 lcd.backlight();
 lcd.setCursor(0,0);
 lcd.print("Sistem Tertanammmmmmmmmmmm");
 lcd.setCursor(0,1);
 lcd.print("Informatika");
}

void loop() {
lcd.scrollDisplayLeft();
delay(300);
}