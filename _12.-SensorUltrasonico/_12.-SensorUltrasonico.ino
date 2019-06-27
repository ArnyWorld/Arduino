const char pinTrig = 8;
const char pinEcho=9;
long duracion,distancia;  

void setup() 
{
  Serial.begin(9600);
  pinMode(pinEcho,INPUT);
  pinMode(pinTrig,OUTPUT);
  
}
void loop() {
digitalWrite(pinTrig,LOW);
delayMicroseconds(2);
digitalWrite(pinTrig,HIGH);
delayMicroseconds(10);
digitalWrite(pinTrig,HIGH);

duracion=pulseIn(pinEcho,HIGH);
/*formula*/
//velocidad=distanciaRecorrida/tiempo;
//Donde la velocidad del sonido 
//es 340m/s=2d/t
//d=t/59
distancia=duracion/59;

Serial.println("Distancia : ");
Serial.println(distancia);
delay(100);
}
