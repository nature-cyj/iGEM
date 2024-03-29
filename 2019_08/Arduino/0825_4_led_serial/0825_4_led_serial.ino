int led0 = 8;
int led1 = 9;
int led2 = 10;
int led3 = 11;

int time_1 = 500; // Length of "on"
int time_2 = 500; // Length of "off"

void setup() {
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  Serial.begin(9600); // Serial input
}

void loop() {
  // check for incoming serial data
  char state = Serial.read(); // 0~3 (or 0~6 for 7 led)

  if (state == '0') {
    digitalWrite(led0, HIGH);
    delay(time_1);
    digitalWrite(led0, LOW);
    delay(time_2);
  }

  else if (state == '1') {
    digitalWrite(led1, HIGH);
    delay(time_1);
    digitalWrite(led1, LOW);
    delay(time_2);
  }

  else if (state == '2') {
    digitalWrite(led2, HIGH);
    delay(time_1);
    digitalWrite(led2, LOW);
    delay(time_2);
  }

  else if (state == '3') {
    digitalWrite(led3, HIGH);
    delay(time_1);
    digitalWrite(led3, LOW);
    delay(time_2);
  }

}
