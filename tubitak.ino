#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
 int buzzer=10,led=11; 
const int trig = 9;
const int echo = 8;

int mesafe ;
int zaman;

void setup()
{
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
  pinMode(buzzer ,OUTPUT);
  pinMode(led ,OUTPUT);

  lcd.begin();
  lcd.setCursor(2,0);
 lcd.print("GENC OSMAN O.");
  lcd.setCursor(7, 1);
  lcd.print("6/H");
   delay(2500);
}

void loop()
{
  digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
zaman=pulseIn(echo,HIGH);
mesafe=(zaman/2)/29,1;
  lcd.clear();
  lcd.home();
  delay(250);
  lcd.print("mesafe");
  lcd.setCursor(7,0);
  lcd.print(mesafe);
  lcd.setCursor(11,0);
  lcd.print("cm");
  if(mesafe<=25)
{
  lcd.setCursor(0,1);
   lcd.print("tehlikeli");
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(24);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(25);
  
}
else if(mesafe<=50)
{
    lcd.setCursor(0,1);
   lcd.print("tehlikeli");
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(48);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(50);
}
else if(mesafe<=75)
{
    lcd.setCursor(0,1);
   lcd.print("tehlikeli");
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(72);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(75);
}
else if(mesafe<=100)
{
    lcd.setCursor(0,1);
   lcd.print("tehlikeli");
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(96);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(100);
}
else if(mesafe<=125)
{
    lcd.setCursor(0,1);
   lcd.print("guvenli");
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(120);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(125);
}
else if(mesafe<=150)
{
    lcd.setCursor(0,1);
   lcd.print("guvenli");
  digitalWrite(buzzer,HIGH);
  digitalWrite(led,HIGH);
  delay(144);
  digitalWrite(buzzer,LOW);
  digitalWrite(led,LOW);
  delay(150);
}
  delay(250);

} 
