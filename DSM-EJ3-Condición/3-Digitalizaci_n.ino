void setup() {
  Serial.begin(9600);

}

void loop() {
  int lectura = analogRead(5);
  Serial.println(lectura);

}
