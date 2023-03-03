const int pinRelay = 7;
const int sensorSound =A5;

void setup(){
  Serial.begin(9600);
  pinMode (pinRelay, OUTPUT);
  digitalWrite(pinRelay,LOW);
}

void loop() {
  const int nilaiSensor = analogRead(sensorSound);
  if (nilaiSensor > 30){
    delay(100);

    //perulangan yang terus menerus
    while(true){
    digitalWrite(pinRelay, HIGH);
    Serial.println("Lampu Nyala");
    int nilaiSensor = analogRead(sensorSound);
    if(nilaiSensor > 80){
      break;
      }
    }
    delay(100);
  } else{
    digitalWrite(pinRelay, LOW);    
    Serial.println("Lampu Mati");

  }
}
