const int  gR1=1, yR1=2, rR1=3;
  const int  gR1=4, yR1=5, rR1=6;
  const int  gR1=7, yR1=8, rR1=9;
void setup() {
  pinMode(gR1, OUTPUT);
  pinMode(yR1, OUTPUT);
  pinMode(rR1, OUTPUT);

  pinMode(gR2, OUTPUT);
  pinMode(yR2, OUTPUT);
  pinMode(rR2, OUTPUT);

  pinMode(gR3, OUTPUT);
  pinMode(yR3, OUTPUT);
  pinMode(rR3, OUTPUT);
}

void s1(){
  digitalWrite(gPinR1, HIGH);
  digitalWrite(yPinR1, LOW);
  digitalWrite(rPinR1, LOW);

  digitalWrite(gPinR2, LOW);
  digitalWrite(yPinR2, LOW);
  digitalWrite(rPinR2, HIGH);

  digitalWrite(gPinR3, LOW);
  digitalWrite(yPinR3, LOW);
  digitalWrite(rPinR3, HIGH);

}
void s2(){
  digitalWrite(gPinR1, HIGH);
  digitalWrite(yPinR1, HIGH);
  digitalWrite(rPinR1, LOW);

  digitalWrite(gPinR2, LOW);
  digitalWrite(yPinR2, HIGH);
  digitalWrite(rPinR2, HIGH);

  digitalWrite(gPinR3, LOW);
  digitalWrite(yPinR3, LOW);
  digitalWrite(rPinR3, HIGH);
}
void s3(){
  digitalWrite(gPinR1, LOW);
  digitalWrite(yPinR1, LOW);
  digitalWrite(rPinR1, HIGH);

  digitalWrite(gPinR2, HIGH);
  digitalWrite(yPinR2, LOW);
  digitalWrite(rPinR2, LOW);

  digitalWrite(gPinR3, LOW);
  digitalWrite(yPinR3, LOW);
  digitalWrite(rPinR3, HIGH);
}
void s4(){
  digitalWrite(gPinR1, LOW);
  digitalWrite(yPinR1, LOW);
  digitalWrite(rPinR1, HIGH);

  digitalWrite(gPinR2, HIGH);
  digitalWrite(yPinR2, HIGH);
  digitalWrite(rPinR2, LOW);

  digitalWrite(gPinR3, LOW);
  digitalWrite(yPinR3, HIGH);
  digitalWrite(rPinR3, HIGH);
}
void s5(){
  digitalWrite(gPinR1, LOW);
  digitalWrite(yPinR1, LOW);
  digitalWrite(rPinR1, HIGH);

  digitalWrite(gPinR2, LOW);
  digitalWrite(yPinR2, LOW);
  digitalWrite(rPinR2, HIGH);

  digitalWrite(gPinR3, HIGH);
  digitalWrite(yPinR3, LOW);
  digitalWrite(rPinR3, LOW);
}
void s6(){
  digitalWrite(gPinR1, LOW);
  digitalWrite(yPinR1, HIGH);
  digitalWrite(rPinR1, HIGH);

  digitalWrite(gPinR2, LOW);
  digitalWrite(yPinR2, LOW);
  digitalWrite(rPinR2, HIGH);

  digitalWrite(gPinR3, HIGH);
  digitalWrite(yPinR3, HIGH);
  digitalWrite(rPinR3, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  s1();
  delay(5000);

  s2();
  delay(1000);
  s3();
  delay(5000);
  s4();
  delay(1000);
  s5();
  delay(5000);
  s6();
  delay(1000);
}