void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = digitalRead(2);
  Serial.println(sensorValue);

  if(sensorValue == 1){
    digitalWrite(4,HIGH);
    Serial.println("Came here");
    delay(3000);
    digitalWrite(4,LOW);
  }
  delay(1000);

}
