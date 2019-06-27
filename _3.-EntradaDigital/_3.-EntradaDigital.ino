//Declaramos los pines a utilizar
const int led=5;
const int pulsador=7;
//Variables que ayudaran a controlar el estado del pulsador
int estadoActual=0;
int estadoAuxiliar=0;
int estadoAnterior=0;

void setup() {
  //Un pin sera de Salida y el otro de entrada
  pinMode(led,OUTPUT);
  pinMode(pulsador,INPUT);
}
void loop() {
//Obtenemos el valor del pulsador al momento de presionar.
  estadoActual=digitalRead(pulsador);
  if((estadoActual) && (estadoAnterior==LOW)){
    estadoAuxiliar=1-estadoAuxiliar;  
    delay(100);
  }
  estadoAnterior=estadoActual;
  if(estadoAuxiliar==1){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
    }
}
