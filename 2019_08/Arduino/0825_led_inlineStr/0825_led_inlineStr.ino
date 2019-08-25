int led0 = 8;
int led1 = 9;
int led2 = 10;
int led3 = 11;

int time_1 = 500; // Length of "on"
int time_2 = 300; // Length of "off"

int i = 0;
char input_string[] = "0123210";
int data_length = sizeof(input_string)/sizeof(input_string[0]);

void setup() {
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // check for incoming serial data
  char state = input_string[i]; // 0~3 (or 0~6 for 7 led)
  if (i == data_length){
    exit(0);
  }

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

 i++;
}
