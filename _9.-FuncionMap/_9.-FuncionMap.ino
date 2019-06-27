void setup() {
Serial.begin(9600);
}

void loop() {
  //El potenciometro a utilizar captura datos que van de 0 a 688.
  //Estos valores sera llevados al intervalo 0 -- 180
  //Para esto utilizaremos la función MAP
  int potenciometro=analogRead(A0);
  Serial.println("Valor Original :");
  Serial.println(potenciometro);
  delay(2000);
  int datoConvertido=map(potenciometro,0,688,0,180);
  Serial.println("Nuevo valor :");
  Serial.println(datoConvertido);
  delay(2000);
}
