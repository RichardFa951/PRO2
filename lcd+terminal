#include <LiquidCrystal.h>
LiquidCrystal lcd(11, 10, 7, 6, 5, 4);
int a =1;
int b = a;

void setup(){
Serial.begin(9600);
pinMode(A0, INPUT);
lcd.begin(16,2);

}
void loop() { 
  delay(1000);
digitalWrite(A5, HIGH);
if(digitalRead(A5)==LOW) {
b=a++;
lcd.print(b);
 Serial.print(b);
}

}
https://imgur.com/a/i7pvpeb


https://imgur.com/a/KN4Psv1 - Selecty
https://imgur.com/a/sie7eZe - Vkladanie
