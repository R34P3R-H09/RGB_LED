int led1 = 3;
int led2 = 4;
int led3 = 2;
int led4 = 1;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;


void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  

}

void loop() {
  digitalWrite (led2, HIGH);
  delay(120);
  digitalWrite (led2, LOW);
  digitalWrite (led4, HIGH);
  delay(80);
  digitalWrite (led4, LOW);
  digitalWrite (led6, HIGH);
  delay(120);
  digitalWrite (led6, LOW);
  digitalWrite (led1, HIGH);
  delay(80);
  digitalWrite (led1, LOW);
  digitalWrite (led5, HIGH);
  delay(120);
  digitalWrite (led5, LOW);
  digitalWrite (led3, HIGH);
  delay(80);
  digitalWrite (led3, LOW);
  digitalWrite (led7, HIGH);
  delay(160);
  digitalWrite (led7, LOW);
  digitalWrite (led8, HIGH);
  delay(120);
  digitalWrite (led8, LOW);
  
  
}
