// motor thumb finger
//int in0 = 10;
//int in9 = 11;

// motor index finger
int in1 = 2;
int in2 = 3;

// motor middle finger
int in3 = 4;
int in4 = 5;

// motor ring finger
int in5 = 6;
int in6 = 7;

// motor pinky finger
//int in7 = 8;
//int in8 = 9;

void setup()
{
  // set all the motor control pins to outputs
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);
  //Thumb & pinky
  //pinMode(in0, OUTPUT);
  //pinMode(in9, OUTPUT);
  //pinMode(in8, OUTPUT);
  //pinMode(in7, OUTPUT);
}
void loop()
{
  // this function will run the motors in both directions at a fixed speed
  // turn on motor A &B
   digitalWrite(in1, LOW);
   digitalWrite(in2, HIGH);
   delay(25);

  // now turn off motors
  // keep this off, commented out
   digitalWrite(in2, LOW);
   delay(1000);
   
  // now change motor directions
   digitalWrite(in1, HIGH);
   digitalWrite(in2, LOW);
   delay(60);
  
  // now turn off motors
  // keep this off, commented out
   digitalWrite(in1, LOW);
   delay(1000);

///////////////
  // turn on motor A &B
   digitalWrite(in3, LOW);
   digitalWrite(in4, HIGH);
   delay(25);

  // now turn off motors
  // keep this off, commented out
   digitalWrite(in4, LOW);
   delay(1000);
   
  // now change motor directions
   digitalWrite(in3, HIGH);
   digitalWrite(in4, LOW);
   delay(45);
  
  // now turn off motors
  // keep this off, commented out
   digitalWrite(in3, LOW);
   delay(1000);

///////////////
  // turn on motor A &B
   digitalWrite(in6, LOW);
   digitalWrite(in5, HIGH);
   delay(25);

  // now turn off motors
  // keep this off, commented out
   digitalWrite(in5, LOW);
   delay(1000);
   
  // now change motor directions
   digitalWrite(in6, HIGH);
   digitalWrite(in5, LOW);
   delay(45);
  
  // now turn off motors
  // keep this off, commented out
   digitalWrite(in6, LOW);
   delay(1000);

///////////////
  // turn on motor A &B
   digitalWrite(in1, LOW);
   digitalWrite(in2, HIGH);
   digitalWrite(in3, LOW);
   digitalWrite(in4, HIGH);
   digitalWrite(in6, LOW);
   digitalWrite(in5, HIGH);
   delay(25);

  // now turn off motors
  // keep this off, commented out
   digitalWrite(in2, LOW);
   digitalWrite(in4, LOW);
   digitalWrite(in5, LOW);
   delay(1000);
   
  // now change motor directions
   digitalWrite(in1, HIGH);
   digitalWrite(in2, LOW);
   digitalWrite(in3, HIGH);
   digitalWrite(in4, LOW);   
   digitalWrite(in6, HIGH);
   digitalWrite(in5, LOW);
   delay(45);
  
  // now turn off motors
  // keep this off, commented out
   digitalWrite(in1, LOW);
   digitalWrite(in3, LOW);
   digitalWrite(in6, LOW);
   delay(1000);
}
