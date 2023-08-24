// Morse Code Display using LED and Button

// Pin assignments
int led1 = LED_BUILTIN;   // LED connected to the built-in LED pin
int buttonPin = 2;        // Push button for resetting the name
bool isButtonPressed = false; // Flag to indicate if the button is pressed

void setup() {
  pinMode(led1, OUTPUT);   // Set LED pin as an output
  pinMode(buttonPin, INPUT_PULLUP); // Set button pin as an input with pull-up resistor
  attachInterrupt(digitalPinToInterrupt(buttonPin), resetName, FALLING); // Attach interrupt to button pin
}

void loop() {
  if (isButtonPressed) {
    resetName();          // Call resetName function if the button is pressed
    isButtonPressed = false; // Reset the button press flag
  }

  // Display "Prabhjot" in Morse code
  // P (.--.)
  blinkDot(); delay(500);
  blinkDash(); delay(500);
  blinkDash(); delay(500);
  blinkDot(); delay(500);
  blinkDash(); delay(500);
  blinkDot(); delay(1000);

  // r (.-.)
  blinkDot(); delay(500);
  blinkDash(); delay(500);
  blinkDot(); delay(500);
  blinkDot(); delay(1000);

  // a (.-)
  blinkDot(); delay(500);
  blinkDash(); delay(1000);

  // b (-...)
  blinkDash(); delay(500);
  blinkDot(); delay(500);
  blinkDot(); delay(500);
  blinkDot(); delay(1000);

  // h (....)
  blinkDot(); delay(500);
  blinkDot(); delay(500);
  blinkDot(); delay(500);
  blinkDot(); delay(1000);

  // j (.---)
  blinkDot(); delay(500);
  blinkDash(); delay(500);
  blinkDash(); delay(500);
  blinkDash(); delay(1000);

  // o (---)
  blinkDash(); delay(500);
  blinkDash(); delay(500);
  blinkDash(); delay(500);
  blinkDot(); delay(1000);

  // t (-)
  blinkDash(); delay(1000);

  delay(2000);  // Gap between words
}
// Function to blink a dot
void blinkDot() {
  digitalWrite(led1, HIGH);
  delay(200);
  digitalWrite(led1, LOW);
  delay(200);
}
// Function to blink a dash
void blinkDash() {
  digitalWrite(led1, HIGH);
  delay(600);
  digitalWrite(led1, LOW);
  delay(200);
}

void resetName() {
  // Reset the name display here
  digitalWrite(led1, LOW);
  delay(1000);
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
}
