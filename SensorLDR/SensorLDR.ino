int sensorPin = A0;
int sensorValue = 0;
 
void setup (){
  Serial.begin(9600); // 
  pinMode(7, OUTPUT); // inisialisasi LED sebagai output
}
 
  void loop(){
    sensorValue = analogRead(sensorPin); //Membaca nilai analog dari pin A0
    Serial.println (sensorValue); //Menampilkan hasil pembacaan sensor pada serial monitor
    float voltage = sensorValue * (5.0/1023.0);
    Serial.println(voltage);
      if(voltage <= 100){ 
        digitalWrite (7, HIGH);}
      else{
        digitalWrite(7, LOW);
      }
    delay(1000); 
}