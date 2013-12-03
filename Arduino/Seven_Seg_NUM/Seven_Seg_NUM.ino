/*
FOR COMMON CATHODE SEVEN SEGMENT
Connect these pins-
A to Arduino Pin 2
B to Arduino Pin 3
C to Arduino Pin 4
D to Arduino Pin 8
E to Arduino Pin 9
F to Arduino Pin 11
G to Arduino Pin 12
of the Seven Segment display
*/
const int Seven_Seg[]={2,3,4,8,9,11,12};
void setup()
{
  for(int i = 0; i < 7; i++)
  {  
    pinMode(Seven_Seg[i],OUTPUT);
    digitalWrite(Seven_Seg[i],HIGH);
  }
}
void off()
{
  for(int i=0;i<7;i++)
    digitalWrite(Seven_Seg[i],HIGH);
}
void nine()
{
  digitalWrite(Seven_Seg[0],LOW);
  digitalWrite(Seven_Seg[1],LOW);
  digitalWrite(Seven_Seg[2],LOW);
  digitalWrite(Seven_Seg[3],LOW);
  digitalWrite(Seven_Seg[5],LOW);
  digitalWrite(Seven_Seg[6],LOW);
}
void eight()
{
  for(int i=0;i<7;i++)
    digitalWrite(Seven_Seg[i],LOW);
}
void seven()
{
  digitalWrite(Seven_Seg[0],LOW);
  digitalWrite(Seven_Seg[1],LOW);
  digitalWrite(Seven_Seg[2],LOW);
}
void six()
{
  digitalWrite(Seven_Seg[0],LOW);
  digitalWrite(Seven_Seg[2],LOW);
  digitalWrite(Seven_Seg[3],LOW);
  digitalWrite(Seven_Seg[4],LOW);
  digitalWrite(Seven_Seg[5],LOW);
  digitalWrite(Seven_Seg[6],LOW);
}
void five()
{
  digitalWrite(Seven_Seg[0],LOW);
  digitalWrite(Seven_Seg[2],LOW);
  digitalWrite(Seven_Seg[3],LOW);
  digitalWrite(Seven_Seg[5],LOW);
  digitalWrite(Seven_Seg[6],LOW);
}
void four()
{
  digitalWrite(Seven_Seg[1],LOW);
  digitalWrite(Seven_Seg[2],LOW);
  digitalWrite(Seven_Seg[5],LOW);
  digitalWrite(Seven_Seg[6],LOW);
}
void three()
{
  digitalWrite(Seven_Seg[1],LOW);
  digitalWrite(Seven_Seg[2],LOW);
  digitalWrite(Seven_Seg[3],LOW);
  digitalWrite(Seven_Seg[6],LOW);
  digitalWrite(Seven_Seg[0],LOW);
}
void two()
{
  digitalWrite(Seven_Seg[0],LOW);
  digitalWrite(Seven_Seg[1],LOW);
  digitalWrite(Seven_Seg[3],LOW);
  digitalWrite(Seven_Seg[4],LOW);
  digitalWrite(Seven_Seg[6],LOW);
}
void one()
{
  digitalWrite(Seven_Seg[1],LOW);
  digitalWrite(Seven_Seg[2],LOW);
}
void zero()
{
    digitalWrite(Seven_Seg[0],LOW);
    digitalWrite(Seven_Seg[1],LOW);
    digitalWrite(Seven_Seg[2],LOW);
    digitalWrite(Seven_Seg[3],LOW);
    digitalWrite(Seven_Seg[4],LOW);
    digitalWrite(Seven_Seg[5],LOW);
}
void loop()
{
  nine();
  delay(500);
  off();
  eight();
  delay(500);
  off();
  seven();
  delay(500);
  off();
  six();
  delay(500);
  off();
  five();
  delay(500);
  off();
  four();
  delay(500);
  off();
  three();
  delay(500);
  off();
  two();
  delay(500);
  off();
  one();
  delay(500);
  zero();
  delay(250);
  off();
  delay(250);
  zero();
  delay(250);
  off();
  delay(250);
  zero();
  delay(250);
  off();
}
