//RGB tutorial for RGB LED
//This code will make the led flash red, then green, then blue, subsequently in a loop with 500ms delays.
const int BLUE_PIN = 2;
const int GREEN_PIN = 3;
const int RED_PIN = 4;

int red;
int blue;
int green;

void setColor(int r, int g, int b) {
  analogWrite(RED_PIN, r);
  analogWrite(GREEN_PIN, g);
  analogWrite(BLUE_PIN, b);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

void loop() {
  setColor(255, 0, 0);
      delay(500);
      setColor(0, 255, 0);
      delay(500);
      setColor(0, 0, 255);
      delay(500);  
}
