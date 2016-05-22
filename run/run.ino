#include <Servo.h>

Servo myservo1;
Servo myservo2;

int four = 95;
int r = 85;
int f = 75;
int c = 65;
int space = 55;
int pushDown = 99;
int waitTime = 400;

int pressFour(){
      myservo1.write(four);
      delay(waitTime);

      myservo2.write(pushDown);
      delay(100);
      myservo2.write(117);
      delay(100);
      return 0;
  }

int pressR(){
      myservo1.write(r);
      delay(waitTime);

      myservo2.write(pushDown);
      delay(100);
      myservo2.write(117);
      delay(100);
  }

int pressF(){
      myservo1.write(f);
      delay(waitTime);

      myservo2.write(pushDown);
      delay(100);
      myservo2.write(117);
      delay(100);
  }

int pressC(){
      myservo1.write(c);
      delay(waitTime);

      myservo2.write(pushDown);
      delay(100);
      myservo2.write(117);
      delay(100);
  }

int pressSpace(){
      myservo1.write(space);
      delay(waitTime);

      myservo2.write(pushDown);
      delay(100);
      myservo2.write(117);
      delay(100);

}
int incomingByte = 0;
void setup() {
  myservo1.attach(9);
  myservo2.attach(5);
  myservo2.write(117);
  Serial.begin(9600);
}

void loop() {
  incomingByte = Serial.read();
  if (incomingByte > 0){
    switch (incomingByte){
      case 113:
        // q
        pressC();
        pressR();
        break;
      case 119:
        // w
        pressSpace();
        pressC();
        pressFour();
        break;
      case 101:
        // e
        pressFour();
        pressSpace();
        pressFour();
        break;
      case 114:
        // r
        pressC();
        pressF();
        break;
      case 116:
        // t
        pressSpace();
        pressFour();
        break;
      case 121:
        // y
        pressSpace();
        pressSpace();
        pressR();
        break;
      case 117:
        // u
        pressSpace();
        pressR();
        break;
      case 105:
        // i
        pressR();
        pressC();
        pressFour();
        break;
      case 111:
        // o
        pressF();
        pressSpace();
        pressFour();
        break;
      case 112:
        // p
        pressC();
        pressFour();
        break;
      case 97:
        // a
        pressFour();
        pressFour();
        break;
      case 115:
        // s
        pressC();
        pressSpace();
        pressFour();
        break;
      case 100:
        // d
        pressFour();
        pressC();
        pressFour();
        break;
      case 102:
        // f
        pressR();
        pressFour();
        break;
      case 103:
        // g
        pressR();
        pressR();
        break;
      case 104:
        // h
        pressR();
        pressF();
        break;
      case 106:
        // j
        pressR();
        pressSpace();
        pressFour();
        break;
      case 107:
        // k
        pressF();
        pressFour();
        break;
      case 108:
        // l
        pressF();
        pressR();
        break;
      case 122:
        // z
        pressSpace();
        pressSpace();
        pressF();
        break;
      case 120:
        // x
        pressSpace();
        pressSpace();
        pressFour();
        break;
      case 99:
        // c
        pressFour();
        pressF();
        break;
      case 118:
        // v
        pressSpace();
        pressF();
        break;
      case 98:
        // b
        pressFour();
        pressR();
        break;
      case 110:
        // n
        pressF();
        pressC();
        pressFour();
        break;
      case 109:
        // m
        pressF();
        pressF();
        break;
      case 32:
        // space
        pressSpace();
        pressSpace();
        pressC();
        break;
      case 46:
        // .
        pressC();
        pressSpace();
        pressR();
        break;
      case 44:
        // ,
        pressC();
        pressSpace();
        pressF();
        break;
      case 47:
        // /
        pressC();
        pressSpace();
        pressC();
        break;
      case 59:
        // ;
        pressC();
        pressSpace();
        pressSpace();
        break;
      case 96:
        // `
        pressFour();
        pressC();
        pressR();
        break;
      case 126:
        // ~
        pressFour();
        pressC();
        pressF();
        break;
      case 49:
        // 1
        pressFour();
        pressC();
        pressC();
        break;
      case 50:
        // 2
        pressFour();
        pressC();
        pressSpace();
        break;
      case 41:
        // )
        pressFour();
        pressSpace();
        pressR();
        break;
      case 95:
        // _
        pressFour();
        pressSpace();
        pressF();
        break;
      case 43:
        // +
        pressFour();
        pressSpace();
        pressC();
        break;
      case 61:
        // =
        pressFour();
        pressSpace();
        pressSpace();
        break;
      case 51:
        // 3
        pressR();
        pressC();
        pressR();
        break;
      case 52:
        // 4
        pressR();
        pressC();
        pressF();
        break;
      case 53:
        // 5
        pressR();
        pressC();
        pressC();
        break;
      case 54:
        // 6
        pressR();
        pressC();
        pressSpace();
        break;
      case 55:
        // 7
        pressF();
        pressC();
        pressR();
        break;
      case 56:
        // 8
        pressF();
        pressC();
        pressF();
        break;
      case 57:
        // 9
        pressF();
        pressC();
        pressC();
        break;
      case 48:
        // 0
        pressF();
        pressC();
        pressSpace();
        break;
      case 94:
        // ^
        pressR();
        pressSpace();
        pressR();
        break;
      case 38:
        // &
        pressR();
        pressSpace();
        pressF();
        break;
      case 42:
        // *
        pressF();
        pressC();
        pressC();
        break;
      case 40:
        // (
        pressR();
        pressSpace();
        pressSpace();
        break;
      case 33:
        // !
        pressF();
        pressSpace();
        pressR();
        break;
      case 64:
        // @
        pressF();
        pressSpace();
        pressF();
        break;
      case 35:
        // #
        pressF();
        pressSpace();
        pressC();
        break;
      case 36:
        // $
        pressF();
        pressSpace();
        pressSpace();
        break;
      case 123:
        // {
        pressC();
        pressC();
        pressR();
        break;
      case 125:
        // }
        pressC();
        pressC();
        pressF();
        break;
      case 91:
        // [
        pressC();
        pressC();
        pressC();
        break;
      case 93:
        // ]
        pressC();
        pressC();
        pressSpace();
        break;
      case 124:
        // |
        pressSpace();
        pressC();
        pressR();
        break;
      case 92:
        // backslash
        pressSpace();
        pressC();
        pressF();
        break;
      case 58:
        // :
        pressSpace();
        pressC();
        pressC();
      case 34:
        // "
        pressSpace();
        pressC();
        pressSpace();
      default:
        Serial.println(incomingByte);
        break;
    }
  }


}
