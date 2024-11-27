#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup()
{
lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0); // กำหนดให้ เคอร์เซอร์ อยู่ตัวอักษรตำแหน่งที่0 แถวที่ 1 เตรียมพิมพ์ข้อความ
  lcd.print("Chaiphop songsee"); //พิมพ์ข้อความ "LCD1602 I2c Test"
  lcd.setCursor(3, 1); // กำหนดให้ เคอร์เซอร์ อยู่ตัวอักษรกำแหน่งที3 แถวที่ 2 เตรียมพิมพ์ข้อความ
  lcd.print("6700130510"); //พิมพ์ข้อความ "myarduino.net"
}
void loop() {

}