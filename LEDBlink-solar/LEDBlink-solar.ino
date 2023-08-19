/*
Blinks two LEDs based on a random delay and chance of one lighting
up versus the other. 

By Jeremy Cook
*/

int LEDA = 0;
int LEDB = 1;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LEDA, OUTPUT);
  pinMode(LEDB, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  unsigned long currentMillis = millis();
  int delayOff = random(2000); //random delay to keep LED A off
  int delayOn = random(500);
  int LEDBChance = random(5); // exclusive => 5 is 0 to 4
//need to refine code to use millis();
  if (LEDBChance == 4) digitalWrite(LEDB, HIGH);
  else digitalWrite(LEDA, HIGH);
  delay(delayOn);
  digitalWrite(LEDA, LOW);
  digitalWrite(LEDB, LOW);
  delay(delayOff);
}
