int AL=13;
int ldr=12;
int ldrstate=0;

void setup() {  
   
pinMode(ldr,INPUT);
pinMode(AL,OUTPUT);
}

void loop() {
  
ldrstate=digitalRead(ldr);

if(ldrstate==1)
{
   digitalWrite(AL,HIGH);
}
else 
{
  digitalWrite(AL,LOW);
}
}
