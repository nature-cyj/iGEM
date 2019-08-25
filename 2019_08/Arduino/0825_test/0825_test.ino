int led0 = 8;
int led1 = 9;
int led2 = 10;
int led3 = 11;

int time_1 = 500; // Length of "on"
int time_2 = 300; // Length of "off"

void setup() {
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // check for incoming serial data
    digitalWrite(led0, HIGH);
    delay(time_1);
    digitalWrite(led0, LOW);
    delay(time_2);
    digitalWrite(led1, HIGH);
    delay(time_1);
    digitalWrite(led1, LOW);
    delay(time_2);
    digitalWrite(led2, HIGH);
    delay(time_1);
    digitalWrite(led2, LOW);
    delay(time_2);
    digitalWrite(led3, HIGH);
    delay(time_1);
    digitalWrite(led3, LOW);
    delay(time_2);
}
