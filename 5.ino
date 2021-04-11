
int LED1=11;
int LED2=10;
int LED3=5;


//int LED2gnd=9;
//int LED3gnd=6;


int i;

void setup() 
{
  
 pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  
pinMode(9,OUTPUT);
pinMode(6,OUTPUT);
}




void loop() 
{
for(i=0;i<=255;i++)
{
  analogWrite(LED1,i);
  delay(30);
}
delay(500);


for(i=0;i<=255;i++)
{
  analogWrite(LED2,i);
  delay(30);
}
delay(500);

for(i=0;i<=255;i++)
{
  analogWrite(LED3,i);
  delay(30);
}
delay(500);








for(i=255;i>=0;i--)
{
  analogWrite(LED3,i);
  delay(30);

}
  delay(500);

  for(i=255;i>=0;i--)
{
  analogWrite(LED2,i);
  delay(30);

}
  delay(500);


for(i=255;i>=0;i--)
{
  analogWrite(LED1,i);
  delay(30);

}
  delay(500);




  
}
