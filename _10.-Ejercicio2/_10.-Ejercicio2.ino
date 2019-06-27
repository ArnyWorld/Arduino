const int led1=5;
const int led2=6;
const int led3=7;

void setup() {
    Serial.begin(9600);
    pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
    pinMode(led3,OUTPUT);
}

void loop() {
  //El potenciometro a utilizar captura datos que van de 0 a 688.
  //Estos valores sera llevados al intervalo 0 -- 180
  //Para esto utilizaremos la función MAP
  int potenciometro=analogRead(A0);
  
  int datoConvertido=map(potenciometro,0,688,0,180);
  Serial.println("Nuevo valor :");
  

  if(datoConvertido>0 && datoConvertido <=60){
      digitalWrite(led1,HIGH);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      Serial.println("Rojo");
    }
    
  if(datoConvertido>60 && datoConvertido <=120){
      digitalWrite(led1,LOW);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,LOW);
      Serial.println("Amarillo");
    }
    
  if(datoConvertido>120 && datoConvertido <=180){
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,HIGH);
      Serial.println("Verde");
    }
}
