const int sensorSOUND = A5;
const int pinRelay = 7;

void setup (){
  Serial.begin (9600);
  pinMode (pinRelay, OUTPUT);
  digitalWrite(pinRelay, LOW);

}

void loop(){
  int nilaiSensor = analogRead(sensorSOUND);
  Serial.print ("Nilai sensor = ");
  Serial.println(nilaiSensor);
  if (nilaiSensor > 550) { //nilai ambang batas sensor suara adalah 550.
    digitalWrite(pinRelay, HIGH);
    Serial.println ("SUARA TERDETEKSI");
  } else {
    digitalWrite(pinRelay, LOW);
    Serial.println ("SUARA TIDAK TERDETEKSI");
  }
  delay(2);
}