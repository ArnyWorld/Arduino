//Declaramos la libreria Servo
#include <Servo.h>
//Se utilizara el pin 7.
const int pinServo=7;
//Instanciamos el objeto Servo
Servo servo;
void setup() {
  Serial.begin(9600);
  servo.attach(pinServo);
  servo.write(0);
}

void loop() {
  Serial.print("Giro de 0º");
  servo.write(0);
  delay(2000);
  Serial.print("Giro de 90º");
  servo.write(90);
  delay(2000);
  Serial.print("Giro de 180º");
  servo.write(180);
  delay(2000);
  Serial.print("Giro de 90º");
  servo.write(90);
  delay(2000);
  Serial.print("Giro de 0º");
  servo.write(0);
  delay(2000);

}
