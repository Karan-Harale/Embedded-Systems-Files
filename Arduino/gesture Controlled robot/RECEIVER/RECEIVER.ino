int state=0;
int in1=7;
int in2=6;
int in3=5;
int in4=4;

void setup() {
 pinMode(in1,OUTPUT); 
 pinMode(in2,OUTPUT); 
 pinMode(in3,OUTPUT);
 pinMode(in4,OUTPUT);// put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()>0)
  {
    state=Serial.read();
  if (state=='F') //forward 
    {
     digitalWrite(in1,HIGH); 
     digitalWrite(in2,LOW); 
     digitalWrite(in3,HIGH);
     digitalWrite(in4,LOW);
     Serial.println("forward");
     }
     else if (state=='r') //backward
 { 
digitalWrite(in1,LOW); 
digitalWrite(in2,HIGH);
digitalWrite(in3,LOW);
digitalWrite(in4,HIGH);
     Serial.println("Reverse");

 } 
  else if (state=='L')//left 
{ 
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
     Serial.println("Left");

} 
else if (state=='R')//right 
{ 
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,HIGH); 
digitalWrite(in4,LOW); 
     Serial.println("Right");

}
 else if(state=='O')  //stop 
    { 
    digitalWrite(in1,LOW); 
    digitalWrite(in2,LOW); 
    digitalWrite(in3,LOW); 
    digitalWrite(in4,LOW);

    
         Serial.println("Stop");

    }
  }// put your main code here, to run repeatedly:
    }
