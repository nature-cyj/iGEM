int led0 = 8;
int led1 = 9;
int led2 = 10;
int led3 = 11;

int time_1 = 500; // Length of "on"
int time_2 = 500; // Length of "off"

int state = 0; // 0~3 (or 0~6 for 7 led)

void setup() {
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
