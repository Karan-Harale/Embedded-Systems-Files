#include<dht.h>
#define dht_apin A0
dht DHT;

//int in1 =7;
//int in2 =6;
//
//int heaterbulb=11;

void setup() {
     // put your setup code here, to run once:

//    pinMode(A0,INPUT);
//    pinMode(in1,OUTPUT);
//    pinMode(in2,OUTPUT);
//    pinMode(heaterbulb,OUTPUT);
//    
//digitalWrite(in1,LOW);
//digitalWrite(in2,LOW);
//digitalWrite(heaterbulb,LOW);

Serial.begin(9600);

delay(500);   
}

void loop() {
  // put your main code here, to run repeatedly:
DHT.read11(dht_apin);

Serial.print("Current Humidity =  ");
Serial.print(DHT.humidity);
Serial.println("%  ");
delay(1000);

Serial.print("Current Temperature =  ");
Serial.print(DHT.temperature); 
Serial.println("C  ");
delay(1000);
//{
// if(DHT.humidity<50)
//    {
//    digitalWrite(in1,HIGH); 
//        digitalWrite(in2,LOW); 
//
//    }
//    else if(DHT.humidity>70)
//    {
//      digitalWrite(in1,LOW); 
//      digitalWrite(in2,HIGH);
//    }
//    else
//    {
//      digitalWrite(in1,LOW); 
//      digitalWrite(in2,LOW);
//    }
//}
//
//
// if(DHT.temperature<25)
//    {
//      digitalWrite(heaterbulb,HIGH);
//                                       //Dht11 temperature
//    }
//   else if(DHT.temperature>38)
//    {
//      digitalWrite(in1,HIGH);
//    }
//    else
//    {
//     digitalWrite(heaterbulb,LOW);
//    }
//}
