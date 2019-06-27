//Los pines PWM de la placa Arduino pueden distinguirse gracias al
//símbolo ~ . Los pines de tipo PWM llevan ese simbolo por delante.
const int led=6;
void setup() {
 pinMode(led,OUTPUT);
 Serial.begin(9600);
}

void loop() {
//Con las siguientes instrucciones se ira variando la intensidad de un led.
  analogWrite(led,0);
  delay(1500);
  Serial.println("0");
  analogWrite(led,63);
  delay(1500);
  Serial.println("63");
  analogWrite(led,127);
  delay(1500);
  Serial.println("127");
  analogWrite(led,190);
  delay(1500);
  Serial.println("190");
  analogWrite(led,255);
  delay(1500);
  Serial.println("255");
  
}
