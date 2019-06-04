int redPin= 5;
int greenPin = 6;
int bluePin = 9;
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
void loop() {
  setColor(255,0, 0); // Red Color
  delay(500);
  
  setColor(0, 0, 255); // Blue Color
  delay(500);
  
   setColor(0, 255, 0); // green Color
  delay(500);
}
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
