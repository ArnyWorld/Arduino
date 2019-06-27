//Declaramos el pin a usar.
const int led=5;

void setup() {
//Establecemos la comunicación Serial
Serial.begin(9600);
//Habilitamos el uso del pin de tipo Salida
 pinMode(led,OUTPUT);
}

void loop() {
//Esperamos la interacción con la comunicación Serial. 
//Mientras no se introdusca algun dato en el monitor serial no
// se cumplira la condición 

if(Serial.available()>0){
    int dato=Serial.read();
//Si el dato introducido es 1, se encendera el led
    if(dato=='1'){
        digitalWrite(led,HIGH);
    }
//Si el dato introducido es 0, se encendera el led
    else if(dato=='0'){
        digitalWrite(led,LOW);
 
    }
    else{
       error(); 
      }
  }
}
void error(){
   digitalWrite(led,HIGH);
   delay(500);
   digitalWrite(led,LOW);
   delay(500); 
   Serial.println("Error");    
   digitalWrite(led,HIGH);
   delay(500);
   digitalWrite(led,LOW);
   delay(500);    
}
