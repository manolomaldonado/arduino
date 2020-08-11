void setup()
{
  // define pin modes
  
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 
}

void loop() 
{
  // loop to turn leds od seven seg ON
  int sec = 1000;
  
  printOne();
  delay(sec);
  off();
  printTwo();
  delay(sec);
  off();
  printThree();
  delay(sec);
  off();
  printFour();
  delay(sec);
  off();
  printFive();
  delay(sec);
  off();
  printSix();
  delay(sec);
  off();
  printSeven();
  delay(sec);
  off();
  printEight();
  delay(sec);
  off();
  printNine();
  delay(sec);
  off();
  printZero();
  delay(sec);
  off();
  delay(sec);

}

void off(){
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,LOW);
  }
}

void printOne(){
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
}

void printTwo(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
}

void printThree(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
}

void printFour(){
  digitalWrite(3,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
}

void printEight(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
}

void printNine(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
}

void printFive(){
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
}

void printSix(){
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
}

void printSeven(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
}

void printZero(){
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
}
