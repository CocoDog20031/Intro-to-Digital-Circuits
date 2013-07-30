void setup()
{
  for( int t = 2; t <= 5 ; t++)
 {
 pinMode(t,OUTPUT); 
 }
  
  
}

void loop()
{        
for( int t = 2; t <= 5 ; t++)
 {
 digitalWrite(t,HIGH);
 delay( analogRead(A0));
 digitalWrite(t,LOW);
 }
}
