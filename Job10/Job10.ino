  int ledPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {

  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(ledPin, brightness);
    delay(10);
  }
}
