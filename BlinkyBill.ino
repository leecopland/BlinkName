int led1 = D6;
int led2 = D7;
int dit = 100;
int dah = 300;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
}

void letterL() {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dah);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dit);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dah);
}

void letterE() {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(dit);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(dah);
}

void loop() {
    letterL();
    letterE();
    letterE();
}