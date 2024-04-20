#include <LiquidCrystal.h>
#include<dht.h>
#define dht_apin A0
dht DHT;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int led = 13;
void setup() {
  pinMode(led, OUTPUT);
  lcd.begin(16, 2);              // put your setup code here, to run once:

}

void loop() {
  lcd.clear();            // put your main code here, to run repeatedly:
  lcd.setCursor(5, 0);
  lcd.print("DHT11");


  digitalWrite(led, HIGH);

  delay(300);
  lcd.clear();
  DHT.read11(dht_apin);

  lcd.print("Humidity=");
  lcd.print( DHT.humidity);
  lcd.println("%  ");

  lcd.setCursor(0, 1);

  lcd.print("Temp.=");
  lcd.print( DHT.temperature);
  lcd.print("C");
  delay(200);
  digitalWrite(led, LOW);

}
