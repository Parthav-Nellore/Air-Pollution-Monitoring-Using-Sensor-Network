const int mq135Pin = A0;
const int mq7Pin = A1;
const int mq2Pin = A2;

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int mq135Value = analogRead(mq135Pin);
  float voltage1 = mq135Value * (5.0 / 1023.0);  // Convert sensor value to voltage
  float mq135ppm = 0.4 * voltage1 - 0.1;  // Example formula, modify as needed

  int mq7Value = analogRead(mq7Pin);
  float voltage2 = mq7Value * (5.0 / 1023.0);  // Convert analog value to voltage (assuming 5V reference)
  float mq7ppm = (500 * (voltage2 / 5.0))-30;  // Convert voltage to ppm based on sensor calibration curve


  int mq2Value = analogRead(mq2Pin);
  float voltage3 = mq2Value * (5.0 / 1023.0); // Convert the sensor value to voltage
  float mq2Resistance = ((5.0 - voltage3) / voltage3)-7;  // Calculate the resistance of the sensor using a known reference resistor

  Serial.print(mq135ppm*1000);
  Serial.print("\t");
  Serial.print(mq7ppm);
  Serial.print("\t");
  Serial.println(mq2Resistance);

  delay(3000); // Delay for 1 second before reading again
}
