int ON = 2;
int led = 3;
int current = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(ON, INPUT);
  pinMode(led, OUTPUT);
  pinMode(current, OUTPUT);
  digitalWrite(led, LOW);
  digitalWrite(current, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ON_signal = digitalRead(ON);
  if (ON_signal == 1) {
    digitalWrite(led, HIGH);
    digitalWrite(current, HIGH);
    delay(5000);
    digitalWrite(led, LOW);
    digitalWrite(current, LOW);
    delay(2000);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(current, LOW);
  }
}
