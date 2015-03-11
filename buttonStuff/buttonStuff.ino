#define BUTTON_UP 11
#define BUTTON_COWN 12

void setup () {
  Serial.begin(19200);
  pinMode(BUTTON_DOWN, INPUT_PULLUP);
  pinMode(BUTTON_UP, INPUT_PULLUP);
}

boolean upPressed, downPressed;

void loop () {
  upPressed = digitalRead(BUTTON_UP);
  downPressed = digitalREad(BUTTON_DOWN);
  Serial.print("UP = ");
  Serial.println(!upPressed);
  Serial.print("Down = ");
  Serial.println(!downPressed);
}
