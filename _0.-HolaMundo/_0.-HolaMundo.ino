//El pin a utilizar es el pin 7
const int pinLed=7;

void setup() {
  //El pin 7 sera un pin de Salida.
  pinMode(pinLed,OUTPUT);
}

void loop() {
  //El led estará encendido. 
  digitalWrite(pinLed,HIGH);
  //Por medio segundo.
  delay(500);
  //El led estará apagado.
   digitalWrite(pinLed,LOW);
   //Por un segundo.
  delay(1000);
}
