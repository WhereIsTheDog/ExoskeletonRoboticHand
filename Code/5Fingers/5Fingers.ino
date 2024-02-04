const int thumb1 = 2;
const int thumb2 = 3;
const int index1 = 4;
const int index2 = 5;
const int middle1 = 6;
const int middle2 = 7;
const int ring1 = 8;
const int ring2 = 9;
const int little1 = 10;
const int little2 = 11;

void setup() {
  Serial.begin(9600); // 初始化串口通信，波特率设置为9600
  pinMode(thumb1, OUTPUT);
  pinMode(index1, OUTPUT);
  pinMode(middle1, OUTPUT);
  pinMode(ring1, OUTPUT);
  pinMode(little1, OUTPUT);
  pinMode(thumb2, OUTPUT);
  pinMode(index2, OUTPUT);
  pinMode(middle2, OUTPUT);
  pinMode(ring2, OUTPUT);
  pinMode(little2, OUTPUT);

  //全部引脚低电压
  digitalWrite(thumb1, LOW);
  digitalWrite(thumb2, LOW);
  digitalWrite(index1, LOW);
  digitalWrite(index2, LOW);
  digitalWrite(middle1, LOW);
  digitalWrite(middle2, LOW);
  digitalWrite(ring1, LOW);
  digitalWrite(ring2, LOW);
  digitalWrite(little1, LOW);
  digitalWrite(little2, LOW);
}

void loop() {
  // 读取A0到A4模拟端口的值
  int analogValueA0 = analogRead(A0);
  int analogValueA1 = analogRead(A1);
  int analogValueA2 = analogRead(A2);
  int analogValueA3 = analogRead(A3);
  int analogValueA4 = analogRead(A4);

  // 通过串口输出读取到的值
  Serial.print("A0: ");
  Serial.println(analogValueA0);
  Serial.print("A1: ");
  Serial.println(analogValueA1);
  Serial.print("A2: ");
  Serial.println(analogValueA2);
  Serial.print("A3: ");
  Serial.println(analogValueA3);
  Serial.print("A4: ");
  Serial.println(analogValueA4);
  Serial.println("");
  
  // thumb
  if (analogValueA0 < 200) {
    digitalWrite(thumb1, HIGH);
    delay(100);
    digitalWrite(thumb1, LOW);
  } else if (analogValueA0 > 800){
    digitalWrite(thumb2, HIGH); 
    delay(100);
    digitalWrite(thumb2, LOW);
  } else {
    digitalWrite(thumb1, LOW);
    digitalWrite(thumb2, LOW);
  }
  
  // index
  if (analogValueA1 < 200) {
    digitalWrite(index1, HIGH);
    delay(100);
    digitalWrite(index1, LOW);
  } else if (analogValueA1 > 800){
    digitalWrite(index2, HIGH); 
    delay(100);
    digitalWrite(index2, LOW);
  } else {
    digitalWrite(index1, LOW);
    digitalWrite(index2, LOW);
  }

  // middle
  if (analogValueA2 < 200) {
    digitalWrite(middle1, HIGH);
    delay(100);
    digitalWrite(middle1, LOW);
  } else if (analogValueA2 > 800){
    digitalWrite(middle2, HIGH); 
    delay(100);
    digitalWrite(middle2, LOW);
  } else {
    digitalWrite(middle1, LOW);
    digitalWrite(middle2, LOW);
  }

  // ring
  if (analogValueA3 < 200) {
    digitalWrite(ring1, HIGH);
    delay(100);
    digitalWrite(ring1, LOW);
  } else if (analogValueA3> 800){
    digitalWrite(ring2, HIGH); 
    delay(100);
    digitalWrite(ring2, LOW);
  } else {
    digitalWrite(ring1, LOW);
    digitalWrite(ring2, LOW);
  }

  // little
  if (analogValueA4 < 200) {
    digitalWrite(little1, HIGH);
    delay(100);
    digitalWrite(little1, LOW);
  } else if (analogValueA4> 800){
    digitalWrite(little2, HIGH); 
    delay(100);
    digitalWrite(little2, LOW);
  } else {
    digitalWrite(little1, LOW);
    digitalWrite(little2, LOW);
  }
  
  delay(500);
}
