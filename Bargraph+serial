int randomNumber;
bool a = false;
void setup() {
Serial.begin(9600);
DDRB &= ~(1<<5);
PORTB |= 1<<5;
DDRD= 0b11111100;
DDRB = 0b1011111;


}

void loop() {
if ( (PINB&(1<<5))==0 && a==false){
  PORTD &= ~(1<<5);
  PORTD &= ~(1<<6);
  PORTD &= ~(1<<7);
  PORTB &= ~(1<<0);
  PORTB &= ~(1<<1);
  PORTB &= ~(1<<2);
  PORTB &= ~(1<<3);
  PORTB &= ~(1<<4);
randomNumber=  random(1, 9);
Serial.println(randomNumber);
  a=true;
}
else if ((PINB&(1<<5)) != 0 && a == true){
  a= false;

}
if (randomNumber == 1 ){
  PORTD |= 1<<4;
}
if (randomNumber == 2  ){
  PORTD |= 1<<4;
  PORTD |= 1<<5;


}
if (randomNumber == 3 ){
  PORTD |= 1<<4;
  PORTD |= 1<<5;
  PORTD |= 1<<6;

}
if (randomNumber == 4 ){
  PORTD |= 1<<4;
  PORTD |= 1<<5;
  PORTD |= 1<<6;
  PORTD |= 1<<7;

}
if (randomNumber == 5 ){
  PORTD |= 1<<4;
  PORTD |= 1<<5;
  PORTD |= 1<<6;
  PORTD |= 1<<7;
  PORTB |= 1<<1;

}
if (randomNumber == 6){
  PORTD |= 1<<4;
  PORTD |= 1<<5;
  PORTD |= 1<<6;
  PORTD |= 1<<7;
  PORTB |= 1<<1;
  PORTB |= 1<<2;

}
if (randomNumber == 7){
  PORTD |= 1<<4;
  PORTD |= 1<<5;
  PORTD |= 1<<6;
  PORTD |= 1<<7;
  PORTB |= 1<<1;
  PORTB |= 1<<2;
  PORTB |= 1<<3;
}
if (randomNumber == 8){
  PORTD |= 1<<4;
  PORTD |= 1<<5;
  PORTD |= 1<<6;
  PORTD |= 1<<7;
  PORTB |= 1<<1;
  PORTB |= 1<<2;
  PORTB |= 1<<3;
  PORTB |= 1<<4;
}

}
https://prnt.sc/klztQ242UeNm
