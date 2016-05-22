#include <Servo.h>

Servo myservo1; 
Servo myservo2;

int four = 95; 
int r = 85;
int f = 75;
int c = 65;
int space = 55;

int pressFour(){
      myservo1.write(four);              
      delay(1000);

      myservo2.write(105);
      delay(100);
      myservo2.write(117);
      delay(100);
      return 0;
  }

int pressR(){
      myservo1.write(r);              
      delay(1000);

      myservo2.write(105);
      delay(100);
      myservo2.write(117);
      delay(100);
  }

int pressF(){
      myservo1.write(f);              
      delay(1000);

      myservo2.write(105);
      delay(100);
      myservo2.write(117);
      delay(100);
  }

int pressC(){
      myservo1.write(c);              
      delay(1000);

      myservo2.write(105);
      delay(100);
      myservo2.write(117);
      delay(100);
  }

int pressSpace(){
      myservo1.write(space);              
      delay(1000);

      myservo2.write(105);
      delay(100);
      myservo2.write(117);
      delay(100);
      
}

void setup() {
  myservo1.attach(9);
  myservo2.attach(5);
  myservo2.write(117);
}

void loop() {
}




