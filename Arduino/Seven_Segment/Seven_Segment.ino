/*
Connect these pins-
A to Arduino Pin 2
B to Arduino Pin 3
C to Arduino Pin 4
D to Arduino Pin 8
E to Arduino Pin 9
F to Arduino Pin 11
of the Seven Segment display
*/
const int Seven_Seg[]={2,3,4,8,9,11};
void setup()
{
  for(int i=0;i<6;i++)
  {  
    pinMode(Seven_Seg[i],OUTPUT);
    digitalWrite(Seven_Seg[i],HIGH);
  }
}
void loop()
{
  for(int i=0;i<6;i++)
  {
      digitalWrite(Seven_Seg[i],LOW);
      if(i>0)
        digitalWrite(Seven_Seg[i-1],HIGH);
      delay(1000/6);
  }
  digitalWrite(Seven_Seg[5],HIGH);
  delay(1000/6);
}
