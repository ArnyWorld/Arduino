//Declaramos el pin a usar.
const int led=5;

void setup() {
//Establecemos la comunicación Serial
Serial.begin(9600);
//Habilitamos el uso del pin de tipo Salida
 pinMode(led,OUTPUT);
}

void loop() {
//Led Encendido
  digitalWrite(led,HIGH);
//Muestra el mensaje por el monitor serial
  Serial.println("LED ENCENDIDO");
//Tiempo 2 segundos
   delay(2000);

//Led apagado
  digitalWrite(led,LOW);
//Muestra el mensaje por el monitor serial
  Serial.println("LED APAGADO");
//Tiempo 2 segundos
  delay(2000);
}
