
/*#define left 3
#define right 4
#define down 13
#define up 12
*/
void setup() {
Serial.begin(9600);
pinMode(5,OUTPUT);
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(13,INPUT);
pinMode(12,INPUT);
pinMode(6, INPUT);
pinMode(11, INPUT);

digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(6, HIGH);
digitalWrite(11, HIGH);
}

void loop() {
  digitalWrite(5, HIGH);
int left =digitalRead(3);
int right=digitalRead(2);
int up =digitalRead(13);
int down =digitalRead(12);


Serial.print("\n left   ");
Serial.print(left);
Serial.print("\n right   ");
Serial.print(right);
Serial.print("\n up    ");
Serial.print(up);
Serial.print("\n down    ");
Serial.print(down);
delay(1000);

int menu = digitalRead(6);
int fire = digitalRead(11);
Serial.print("\n\n menu    ");
Serial.print(menu);
Serial.print("\n\n fire");
Serial.print(fire);
}
