void setup()
{
  for( int t = 2; t <= 5 ; t++)
 {
 pinMode(t,OUTPUT); 
 }
}


               void loop()
{ for( int t = 2; t <= 5 ; t++)
 {
 digitalWrite(t,HIGH);
 delay(20);
 digitalWrite(t,LOW);
 }
}
