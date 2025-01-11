int RED = 13;
int GREEN = 12;
int YELLOW1 = 11;
int BLUE = 10;
int YELLOW2 = 9;

int LEDARRAY[] = {RED, GREEN, YELLOW1, BLUE, YELLOW2};

void setup() {
  Serial.begin(9600);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW1, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(YELLOW2, OUTPUT);
}

void loop() {
  float something = analogRead(A0);
  float value = (something/669.00)*100.00;
  Serial.println(value);
  if(value <= 20) {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    digitalWrite(YELLOW1, LOW);
    digitalWrite(BLUE, LOW);
    digitalWrite(YELLOW2, LOW);
  }
  if (value >= 20 && value <= 40) {
    digitalWrite(GREEN, HIGH);
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW1, LOW);
    digitalWrite(BLUE, LOW);
    digitalWrite(YELLOW2, LOW);
  }
  if (value >= 40 && value <= 60) {
    digitalWrite(YELLOW1, HIGH);
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    digitalWrite(YELLOW2, LOW);
  }
  if (value >= 60 && value < 80) {
    digitalWrite(BLUE, HIGH);
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(YELLOW1, LOW);
    digitalWrite(YELLOW2, LOW);
  }
  if (value >= 80 && value <= 100) {
    digitalWrite(YELLOW2, HIGH);
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(YELLOW1, LOW);
    digitalWrite(BLUE, LOW);
  }
}