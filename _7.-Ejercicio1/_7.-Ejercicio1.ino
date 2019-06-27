const int ldr=A0;
const int led=7;

void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int dato=analogRead(ldr);
Serial.println(dato);
delay(1000);

if(dato<=20){
  digitalWrite(led,HIGH);
  }
else{
  digitalWrite(led,LOW);
  }

}
