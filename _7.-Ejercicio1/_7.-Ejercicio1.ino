//Declaramos los pines que se van a usar.
const int ldr=A0;
const int led=7;

void setup() {
  //Habilitamos un pin de tipo salida
  pinMode(led,OUTPUT);
  //Establecemos la comunicación serial
  Serial.begin(9600);
}

void loop() {
  //En la variable dato se almacenara los datos capturados por el LDR
    int dato=analogRead(ldr);
    Serial.println(dato);
    delay(1000);
  //Pregunta si el dato capturado es menor a 20.
    if(dato<=20){
      //Si es menor, se encendera e led 
      digitalWrite(led,HIGH);
      }
    else{
      //Si es mayor se apagara el led
      digitalWrite(led,LOW);
      }
}
