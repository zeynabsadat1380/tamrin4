int ledpin = 6;//ledpin connected to digital pin 6
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);//setup serial
}

void loop() {
   // put your main code here, to run repeatedly:
  float voltage = analogRead(A0);//read the input voltage(analog pin A0)
  float voltage1 = voltage / 1023 * 5;
  Serial.print("voltage = ");
  Serial.println(voltage1);
  delay(1000);
  float voltage2 = map(voltage, 0, 1023, 0, 255);
  analogWrite(6, voltage2);
}
