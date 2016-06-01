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
int shortWait = 100;
int pushPos = 117;

int pressChar(int whichChar){
  myservo1.write(whichChar);
  delay(waitTime);
  myservo2.write(pushDown);
  delay(shortWait);
  myservo2.write(pushPos);
  delay(shortWait);
  }


int incomingByte = 0;
void setup() {
  myservo1.attach(9);
  myservo2.attach(5);
  myservo2.write(pushPos);
  Serial.begin(9600);
}

void loop() {
  incomingByte = Serial.read();
  if (incomingByte > 0){
    switch (incomingByte){
      case 113:
        // q
        pressChar(c);
        pressChar(r);
        break;
      case 119:
        // w
        pressChar(space);
        pressChar(c);
        pressChar(four);
        break;
      case 101:
        // e
        pressChar(four);
        pressChar(space);
        pressChar(four);
        break;
      case 114:
        // r
        pressChar(c);
        pressChar(f);
        break;
      case 116:
        // t
        pressChar(space);
        pressChar(four);
        break;
      case 121:
        // y
        pressChar(space);
        pressChar(space);
        pressChar(r);
        break;
      case 117:
        // u
        pressChar(space);
        pressChar(r);
        break;
      case 105:
        // i
        pressChar(r);
        pressChar(c);
        pressChar(four);
        break;
      case 111:
        // o
        pressChar(f);
        pressChar(space);
        pressChar(four);
        break;
      case 112:
        // p
        pressChar(c);
        pressChar(four);
        break;
      case 97:
        // a
        pressChar(four);
        pressChar(four);
        break;
      case 115:
        // s
        pressChar(c);
        pressChar(space);
        pressChar(four);
        break;
      case 100:
        // d
        pressChar(four);
        pressChar(c);
        pressChar(four);
        break;
      case 102:
        // f
        pressChar(r);
        pressChar(four);
        break;
      case 103:
        // g
        pressChar(r);
        pressChar(r);
        break;
      case 104:
        // h
        pressChar(r);
        pressChar(f);
        break;
      case 106:
        // j
        pressChar(r);
        pressChar(space);
        pressChar(four);
        break;
      case 107:
        // k
        pressChar(f);
        pressChar(four);
        break;
      case 108:
        // l
        pressChar(f);
        pressChar(r);
        break;
      case 122:
        // z
        pressChar(space);
        pressChar(space);
        pressChar(f);
        break;
      case 120:
        // x
        pressChar(space);
        pressChar(space);
        pressChar(four);
        break;
      case 99:
        // c
        pressChar(four);
        pressChar(f);
        break;
      case 118:
        // v
        pressChar(space);
        pressChar(f);
        break;
      case 98:
        // b
        pressChar(four);
        pressChar(r);
        break;
      case 110:
        // n
        pressChar(f);
        pressChar(c);
        pressChar(four);
        break;
      case 109:
        // m
        pressChar(f);
        pressChar(f);
        break;
      case 32:
        // space
        pressChar(space);
        pressChar(space);
        pressChar(c);
        break;
      case 46:
        // .
        pressChar(c);
        pressChar(space);
        pressChar(r);
        break;
      case 44:
        // ,
        pressChar(c);
        pressChar(space);
        pressChar(f);
        break;
      case 47:
        // /
        pressChar(c);
        pressChar(space);
        pressChar(c);
        break;
      case 59:
        // ;
        pressChar(c);
        pressChar(space);
        pressChar(space);
        break;
      case 96:
        // `
        pressChar(four);
        pressChar(c);
        pressChar(r);
        break;
      case 126:
        // ~
        pressChar(four);
        pressChar(c);
        pressChar(f);
        break;
      case 49:
        // 1
        pressChar(four);
        pressChar(c);
        pressChar(c);
        break;
      case 50:
        // 2
        pressChar(four);
        pressChar(c);
        pressChar(space);
        break;
      case 41:
        // )
        pressChar(four);
        pressChar(space);
        pressChar(r);
        break;
      case 95:
        // _
        pressChar(four);
        pressChar(space);
        pressChar(f);
        break;
      case 43:
        // +
        pressChar(four);
        pressChar(space);
        pressChar(c);
        break;
      case 61:
        // =
        pressChar(four);
        pressChar(space);
        pressChar(space);
        break;
      case 51:
        // 3
        pressChar(r);
        pressChar(c);
        pressChar(r);
        break;
      case 52:
        // 4
        pressChar(r);
        pressChar(c);
        pressChar(f);
        break;
      case 53:
        // 5
        pressChar(r);
        pressChar(c);
        pressChar(c);
        break;
      case 54:
        // 6
        pressChar(r);
        pressChar(c);
        pressChar(space);
        break;
      case 55:
        // 7
        pressChar(f);
        pressChar(c);
        pressChar(r);
        break;
      case 56:
        // 8
        pressChar(f);
        pressChar(c);
        pressChar(f);
        break;
      case 57:
        // 9
        pressChar(f);
        pressChar(c);
        pressChar(c);
        break;
      case 48:
        // 0
        pressChar(f);
        pressChar(c);
        pressChar(space);
        break;
      case 94:
        // ^
        pressChar(r);
        pressChar(space);
        pressChar(r);
        break;
      case 38:
        // &
        pressChar(r);
        pressChar(space);
        pressChar(f);
        break;
      case 42:
        // *
        pressChar(f);
        pressChar(c);
        pressChar(c);
        break;
      case 40:
        // (
        pressChar(r);
        pressChar(space);
        pressChar(space);
        break;
      case 33:
        // !
        pressChar(f);
        pressChar(space);
        pressChar(r);
        break;
      case 64:
        // @
        pressChar(f);
        pressChar(space);
        pressChar(f);
        break;
      case 35:
        // #
        pressChar(f);
        pressChar(space);
        pressChar(c);
        break;
      case 36:
        // $
        pressChar(f);
        pressChar(space);
        pressChar(space);
        break;
      case 123:
        // {
        pressChar(c);
        pressChar(c);
        pressChar(r);
        break;
      case 125:
        // }
        pressChar(c);
        pressChar(c);
        pressChar(f);
        break;
      case 91:
        // [
        pressChar(c);
        pressChar(c);
        pressChar(c);
        break;
      case 93:
        // ]
        pressChar(c);
        pressChar(c);
        pressChar(space);
        break;
      case 10:
        // newline
        pressChar(space);
        pressChar(c);
        pressChar(r);
        break;
      case 92:
        // backslash
        pressChar(space);
        pressChar(c);
        pressChar(f);
        break;
      case 58:
        // :
        pressChar(space);
        pressChar(c);
        pressChar(c);
        break;
      case 34:
        // "
        pressChar(space);
        pressChar(c);
        pressChar(space);
        break;
      case 63:
        // ?
        pressChar(space);
        pressChar(space);
        pressChar(space);
        break;
      default:
        Serial.println(incomingByte);
        break;
    }
  }


}
