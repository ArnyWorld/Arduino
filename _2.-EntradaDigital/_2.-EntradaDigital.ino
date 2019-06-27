//Declaramos los pines a utilizar
const int led=5;
const int pulsador=7;

void setup() {
  //Un pin sera de Salida y el otro de entrada
  pinMode(led,OUTPUT);
  pinMode(pulsador,INPUT);
}
void loop() {
//Preguntamos si el pulsador se esta presionando
  if(digitalRead(pulsador)==HIGH){
    //Si el pulsador se encuentra presionado, el led se encendera
    digitalWrite(led,HIGH);
    }
    else{
    //Si el pulsador no se presiona, el led se apagara.
      digitalWrite(led,LOW);
      }
}
