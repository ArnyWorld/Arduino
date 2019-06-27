//Los pines a utilizar serán el pin 5,6,7
const int pinLed1=5;
const int pinLed2=6;
const int pinLed3=7;

void setup() {
  pinMode(pinLed1,OUTPUT);
  pinMode(pinLed2,OUTPUT);
  pinMode(pinLed3,OUTPUT);
}

void loop() {
  //Se tratara de simular un semaforo.

  //Led rojo
  digitalWrite(pinLed1,HIGH);
  digitalWrite(pinLed2,LOW);
  digitalWrite(pinLed3,LOW);
  delay(5000);
//Led Amarillo
  digitalWrite(pinLed1,LOW);
  digitalWrite(pinLed2,HIGH);
  digitalWrite(pinLed3,LOW);
  delay(2500);
//Led Verde
  digitalWrite(pinLed1,LOW);
  digitalWrite(pinLed2,LOW);
  digitalWrite(pinLed3,HIGH);
  delay(5000);

}
