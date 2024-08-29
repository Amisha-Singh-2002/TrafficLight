#define RED_LED_PIN_1 12
#define YELLOW_LED_PIN_1 14
#define GREEN_LED_PIN_1 16

#define RED_LED_PIN_2 17
#define YELLOW_LED_PIN_2 18
#define GREEN_LED_PIN_2 19

#define RED_LED_PIN_3 22
#define YELLOW_LED_PIN_3 23
#define GREEN_LED_PIN_3 25

#define RED_LED_PIN_4 26
#define YELLOW_LED_PIN_4 27
#define GREEN_LED_PIN_4 32

void setup() {
  pinMode(RED_LED_PIN_1, OUTPUT);
  pinMode(YELLOW_LED_PIN_1, OUTPUT);
  pinMode(GREEN_LED_PIN_1, OUTPUT);

  pinMode(RED_LED_PIN_2, OUTPUT);
  pinMode(YELLOW_LED_PIN_2, OUTPUT);
  pinMode(GREEN_LED_PIN_2, OUTPUT);
  
  pinMode(RED_LED_PIN_3, OUTPUT);
  pinMode(YELLOW_LED_PIN_3, OUTPUT);
  pinMode(GREEN_LED_PIN_3, OUTPUT);

  pinMode(RED_LED_PIN_4, OUTPUT);
  pinMode(YELLOW_LED_PIN_4, OUTPUT);
  pinMode(GREEN_LED_PIN_4, OUTPUT);
}

void loop() {
  // Phase 1: Green for Signal 1, Red for Signal 2, Green for Signal 3, Red for Signal 4
  digitalWrite(RED_LED_PIN_1, LOW);
  digitalWrite(YELLOW_LED_PIN_1, LOW);
  digitalWrite(GREEN_LED_PIN_1, HIGH);

  digitalWrite(RED_LED_PIN_2, HIGH);
  digitalWrite(YELLOW_LED_PIN_2, LOW);
  digitalWrite(GREEN_LED_PIN_2, LOW);
  
  digitalWrite(RED_LED_PIN_3, LOW);
  digitalWrite(YELLOW_LED_PIN_3, LOW);
  digitalWrite(GREEN_LED_PIN_3, HIGH);

  digitalWrite(RED_LED_PIN_4, HIGH);
  digitalWrite(YELLOW_LED_PIN_4, LOW);
  digitalWrite(GREEN_LED_PIN_4, LOW);
  
  delay(10000); // Green light for Signals 1 and 3
  
  // Phase 2: Yellow for Signal 1, Red for Signal 2, Yellow for Signal 3, Red for Signal 4
  digitalWrite(RED_LED_PIN_1, LOW);
  digitalWrite(YELLOW_LED_PIN_1, HIGH);
  digitalWrite(GREEN_LED_PIN_1, LOW);

  digitalWrite(RED_LED_PIN_2, HIGH);
  digitalWrite(YELLOW_LED_PIN_2, LOW);
  digitalWrite(GREEN_LED_PIN_2, LOW);
  
  digitalWrite(RED_LED_PIN_3, LOW);
  digitalWrite(YELLOW_LED_PIN_3, HIGH);
  digitalWrite(GREEN_LED_PIN_3, LOW);

  digitalWrite(RED_LED_PIN_4, HIGH);
  digitalWrite(YELLOW_LED_PIN_4, LOW);
  digitalWrite(GREEN_LED_PIN_4, LOW);
  
  
  delay(3000); // Yellow light for Signals 1 and 3
  
  // Phase 3: Red for Signal 1, Green for Signal 2, Red for Signal 3, Green for Signal 4
 digitalWrite(RED_LED_PIN_1, HIGH);
  digitalWrite(YELLOW_LED_PIN_1, LOW);
  digitalWrite(GREEN_LED_PIN_1, LOW);

  digitalWrite(RED_LED_PIN_2, LOW);
  digitalWrite(YELLOW_LED_PIN_2, HIGH);
  digitalWrite(GREEN_LED_PIN_2, LOW);
  
  digitalWrite(RED_LED_PIN_3, HIGH);
  digitalWrite(YELLOW_LED_PIN_3, LOW);
  digitalWrite(GREEN_LED_PIN_3, LOW);

  digitalWrite(RED_LED_PIN_4, LOW);
  digitalWrite(YELLOW_LED_PIN_4, HIGH);
  digitalWrite(GREEN_LED_PIN_4, LOW);
  
  
  delay(3000); // Green light for Signals 2 and 4
  
  // Phase 4: Red for Signal 1, Yellow for Signal 2, Red for Signal 3, Yellow for Signal 4
  digitalWrite(RED_LED_PIN_1, HIGH);
  digitalWrite(YELLOW_LED_PIN_1, LOW);
  digitalWrite(GREEN_LED_PIN_1, LOW);

  digitalWrite(RED_LED_PIN_2, LOW);
  digitalWrite(YELLOW_LED_PIN_2, LOW);
  digitalWrite(GREEN_LED_PIN_2, HIGH);
  
  digitalWrite(RED_LED_PIN_3, HIGH);
  digitalWrite(YELLOW_LED_PIN_3, LOW);
  digitalWrite(GREEN_LED_PIN_3, LOW);

  digitalWrite(RED_LED_PIN_4, LOW);
  digitalWrite(YELLOW_LED_PIN_4, LOW);
  digitalWrite(GREEN_LED_PIN_4, HIGH);
  
  delay(10000); // Yellow light for Signals 2 and 4

  //PHASE 5
  digitalWrite(RED_LED_PIN_1, HIGH);
  digitalWrite(YELLOW_LED_PIN_1, LOW);
  digitalWrite(GREEN_LED_PIN_1, LOW);

  digitalWrite(RED_LED_PIN_2, LOW);
  digitalWrite(YELLOW_LED_PIN_2, HIGH);
  digitalWrite(GREEN_LED_PIN_2, LOW);
  
  digitalWrite(RED_LED_PIN_3, HIGH);
  digitalWrite(YELLOW_LED_PIN_3, LOW);
  digitalWrite(GREEN_LED_PIN_3, LOW);

  digitalWrite(RED_LED_PIN_4, LOW);
  digitalWrite(YELLOW_LED_PIN_4, HIGH);
  digitalWrite(GREEN_LED_PIN_4, LOW);
  
  delay(3000);

  //PHASE 6
  digitalWrite(RED_LED_PIN_1, LOW);
  digitalWrite(YELLOW_LED_PIN_1, HIGH);
  digitalWrite(GREEN_LED_PIN_1, LOW);

  digitalWrite(RED_LED_PIN_2, HIGH);
  digitalWrite(YELLOW_LED_PIN_2, LOW);
  digitalWrite(GREEN_LED_PIN_2, LOW);
  
  digitalWrite(RED_LED_PIN_3, LOW);
  digitalWrite(YELLOW_LED_PIN_3, HIGH);
  digitalWrite(GREEN_LED_PIN_3, LOW);

  digitalWrite(RED_LED_PIN_4, HIGH);
  digitalWrite(YELLOW_LED_PIN_4, LOW);
  digitalWrite(GREEN_LED_PIN_4, LOW);
  
  delay(3000);
}
