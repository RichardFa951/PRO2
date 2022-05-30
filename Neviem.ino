#define SET0(REG,BIT) REG &= ~(1<<BIT)
#define SET1(REG,BIT) REG |= (1<<BIT)
#define TEST(REG,BIT) (REG&(1<<BIT))


int vysledok;


void setup() {
SET0(ADMUX,REFS1); // voľba Aref
   SET0(ADMUX,REFS0);
   SET0(ADMUX,ADLAR); // zarovnanie nadol
   SET1(ADMUX,MUX0); // voľba kanála ADC1
   SET0(ADMUX,MUX1);
   SET0(ADMUX,MUX2);
   SET0(ADMUX,MUX3);
   SET1(ADCSRA,ADEN); // zapnutie ADC
   SET1(ADCSRA,ADATE); // spúšťanie automaticky
   SET1(ADCSRA,ADIE); // generovanie prerušenia
   SET1(SREG,7); // globálne povolenie prerušenia
   SET1(ADCSRA,ADPS2); // voľba preddeličky 128 
   SET1(ADCSRA,ADPS1);
   SET1(ADCSRA,ADPS0);
   SET1(ADCSRA,ADSC); // začatie konverzie

   SET1(DDRD, 0);
   SET1(DDRD, 1);
   SET1(DDRD, 2);
   SET1(DDRD, 3);
   SET1(DDRD, 4);
   SET1(DDRD, 5);
   SET1(DDRD, 6);



}

void loop() {

   vysledok = map(vysledok, 0, 1023, 0, 9);

    if(vysledok == 0){
      PORTD = 0;
      SET1(PORTD, 0); //stred
      SET1(PORTD, 1);// lavyhorny
      SET1(PORTD, 2);// lavydolny
      SET1(PORTD, 3);// dolny
      SET1(PORTD, 4);// pravydolny
      SET1(PORTD, 5);// pravyhorny
      SET1(PORTD, 6);// horny
      }

   delay(10);



}

ISR(ADC_vect)
{
   vysledok = ADCL; // načítanie dolného registra
   vysledok = vysledok | (ADCH<<8); // pripočítanie horného
}
