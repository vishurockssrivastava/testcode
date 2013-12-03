/*
BLUETOOTH MODULE JY MCU (HC 05) Connected to RX and TX
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
  Serial.begin(9600);
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
  int val;
  if(Serial.available())
 {
     val=Serial.read();
     off();
 }
 Serial.println(val);
 switch(val)
 {
   case 0: zero();
           break;
   case 1: one();
           break;
   case 2: two();
           break;
   case 3: three();
           break;
   case 4: four();
           break;
   case 5: five();
           break;
   case 6: six();
           break;
   case 7: seven();
           break;
   case 8: eight();
           break;
   case 9: nine();
           break();
   default:Serial.println("Invalid Input");
 }
}
