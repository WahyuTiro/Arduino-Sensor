int sensorCahaya = A5; 
int pinRelay = 7;
 
void setup() {
  Serial.begin(9600);
  pinMode(sensorCahaya, INPUT);
  pinMode(pinRelay, OUTPUT);
}
 
void loop() {
  int nilaiSensor = analogRead(sensorCahaya); //menyimpan data sensorCahaya pada variabel nilaiSensor
  Serial.println(nilaiSensor);//menampilkan nilaiSensor pada serial monitor
  delay(1);
  if (nilaiSensor <= 100) { //kondisi jika data ldr lebih kecil dari 100
    digitalWrite(pinRelay, HIGH);
  } else { //kondisi selain nilaiSensor lebih besar 100
    digitalWrite(pinRelay, LOW);
  }
}