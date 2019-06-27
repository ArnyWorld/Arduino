const int led=6;
void setup() {
 pinMode(led,OUTPUT);
 Serial.begin(9600);
}

void loop() {
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
