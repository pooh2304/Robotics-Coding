
int LED=11;
int i;

void setup() 
{
  
pinMode(LED,OUTPUT);

}

void loop() 
{
for(i=0;i<=255;i++)
{
  analogWrite(LED,i);
  delay(30);
}
delay(500);
for(i=255;i>=0;i--)
{
  analogWrite(LED,i);
  delay(30);

}
  delay(500);
}
