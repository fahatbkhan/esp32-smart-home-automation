int relayPin = 5;  // GPIO pin connected to relay

void setup() {
  pinMode(relayPin, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  Serial.println("Device ON");
  digitalWrite(relayPin, HIGH);  // Turn ON
  delay(5000);

  Serial.println("Device OFF");
  digitalWrite(relayPin, LOW);   // Turn OFF
  delay(5000);
}