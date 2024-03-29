int pinRelay = 7;
int sensorCahaya = A5;
 
void setup (){
  Serial.begin(9600); 
  pinMode(pinRelay, OUTPUT); // inisialisasi LED sebagai output
}

void loop(){
  int nilaiSensor = analogRead(sensorCahaya); //Membaca nilai analog dari pin A1
  Serial.println (nilaiSensor); //Menampilkan hasil pembacaan sensor pada serial monitor
  float voltage = nilaiSensor * (5.0/1023.0);
  Serial.println(voltage);
  if(voltage < 1){
    digitalWrite (pinRelay, HIGH);
    Serial.println ("Lampu Nyala"); 
  } else{
    digitalWrite(pinRelay, LOW);
    Serial.println ("Lampu Padam"); 
  }
  delay(1000); 
}