int sensorGerak = 2;     //pin Out PIR 
int pinRelay = 4;   //pin IN relay

void setup(){
  Serial.begin(9600);         //pengaturan baud rate untuk komunikasi serial sebesar 9600bps
  pinMode(sensorGerak, INPUT);     //pengaturan pin PIR sebagai input
  pinMode(pinRelay, OUTPUT);  //pengaturan pin relay sebagai output
}
void loop(){
  int nilaiSensor = digitalRead(sensorGerak);
  if (nilaiSensor ==HIGH) {            //jika sensor membaca gerakan maka relay akan aktif
    digitalWrite(pinRelay, HIGH);
    Serial.println("Lampu Nyala");
    delay(10000); //Diberikan waktu tunda 10 detik
  } else {
    digitalWrite(pinRelay, LOW);       //jika sensor tidak membaca gerakan maka relay akan off
    Serial.println("Lampu Padam");
  }
}