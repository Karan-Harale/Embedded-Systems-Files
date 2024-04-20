int sw=7;
int swstate=0;


int ir=12;
int irstate=0;
int led=13;

int rain=11;
int rainstate=1;
int in1=10;
int in2=9;


void setup() {
 
pinMode(led,OUTPUT);
pinMode(in1,OUTPUT);// put your setup code here, to run once:
pinMode(in2,OUTPUT);

pinMode(rain,INPUT);
pinMode(sw,INPUT_PULLUP);
pinMode(ir,INPUT);
}

void loop() {

swstate=digitalRead(sw);
irstate=digitalRead(ir);
rainstate=digitalRead(rain);
 if (swstate==1 && rainstate==0 && irstate==0 )
{
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW); 
  digitalWrite(led,LOW);

}
else if(swstate==1 && rainstate==0 && irstate==1 )
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(led,HIGH);
}

else if(swstate==1 && rainstate==1 && irstate==1 )
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(led,HIGH);
}
 else
 {
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(led,LOW);
 }
}
