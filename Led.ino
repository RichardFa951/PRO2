void setup(){
pinMode(3, OUTPUT);
}
void loop() { 
digitalWrite(A5, HIGH); 
if(digitalRead(A5)==LOW) {
digitalWrite(3, HIGH);
}
else{
  digitalWrite(3, LOW);
}

}
https://imgur.com/a/AkUaK59
