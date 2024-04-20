int ldr=12;

int led=13;

int ldrstate=0;
void setup() {
 pinMode(led,OUTPUT); // put your setup code here, to run once:
pinMode(ldr,INPUT);
}

void loop() {
  
  if (ldrstate==1)// put your main code here, to run repeatedly:

  digitalWrite(led,HIGH);  // put your main code here, to run repeatedly:
delay(500);
digitalWrite(led,LOW);  // put your main code here, to run repeatedly:
delay(500);

}
