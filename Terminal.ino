//Keď načítavam čísla 
int rokNarodenia;
int vek;

void setup() {

  Serial.begin(9600);
  Serial.println("Zadaj rok svojho narodenia ");
}

void loop() {
  if(Serial.available()){

  rokNarodenia = Serial.parseInt();
  vek = 2021-rokNarodenia;
  Serial.print("Tvoj vek je: " +vek);

}
_____________________________________________________
//Keď načítavam písmená
void setup() {

  Serial.begin(9600);
  Serial.println("Zadaj svoje meno ");
}

void loop() {
  if(Serial.available()){
String meno = Serial.readString();/String meno = Serial.readStringUntil('\r');
Serial.println("Vitaj " + meno);
  }
}
