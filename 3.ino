int LED1=2;
int LED2=4;
int LED3=7;
int LED1gnd=3;
int LED2gnd=5;
int LED3gnd=8;

void setup() 
{
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(8,OUTPUT);


   digitalWrite(3,LOW);
   digitalWrite(5,LOW);
   digitalWrite(8,LOW);
}

void loop() 
{

   

    digitalWrite(LED1,HIGH);
    delay(1000);
    
    digitalWrite(LED2,HIGH);
    delay(1000);
    

    digitalWrite(LED3,HIGH);
    delay(1000);
    

    digitalWrite(LED3,LOW);
    delay(500);
    digitalWrite(LED2,LOW);
    delay(500);
    digitalWrite(LED1,LOW);
    delay(500);

    


}
