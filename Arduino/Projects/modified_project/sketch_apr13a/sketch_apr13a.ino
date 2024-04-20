float moisture;
int in3        =11;                      //water pump

#include <dht.h>
#define dht_apin A0                                   // Analog Pin sensor is connected to
dht DHT;
int in1        =13;                      //l293d
int in2        =12;                      //cooling & exaust
int heaterbulb =10;

int ldr=8;
int ldrstate=0;
int al=9;




void setup() {
  pinMode(in3,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(heaterbulb,OUTPUT);
  pinMode(ldr,INPUT);
  pinMode(al,OUTPUT);

  Serial.begin(9600);                                  // serial initialization
delay(500);
}

void loop() {
{
  {  
Serial.println("1.Soil Moisture Sensor");
Serial.println("  ");

moisture=analogRead(A1);                               // Soil moisture sensor
moisture=moisture/204.6;
moisture=moisture*20;
Serial.print("              Moisture of soil(%)= ");
Serial.print(moisture);
Serial.println("%  ");
}
if(moisture<25)
{
 Serial.print("              ");
 Serial.print("Soil Moisture Decreased:-");
 digitalWrite(in3,HIGH);
 Serial.println("Water Pump in Start");

}
else
{
 digitalWrite(in3,LOW);
}

{
Serial.println("        ");
Serial.println("2.DHT11 Humidity & Temperature Sensor");

DHT.read11(dht_apin);
Serial.print("              ");
Serial.print("Current Humidity = ");
Serial.print(DHT.humidity);
Serial.println("%  ");
Serial.print("              ");
Serial.print("Current Temperature = ");
Serial.print(DHT.temperature); 
Serial.println("C  ");
{
 if(DHT.humidity<50)
    {
    digitalWrite(in1,HIGH); 
    digitalWrite(in2,LOW);
    Serial.print("              ");
    Serial.print("Humidity is LOW:- Cooling fan Started");      //Dht11 humidity
    Serial.println(" ");
    }
    else if(DHT.humidity>70)
    {
      digitalWrite(in1,LOW); 
      digitalWrite(in2,HIGH);
    Serial.print("              ");
    Serial.println("Humidity is HIGH:- Exaust fan Started");
    }
    else
    {
    digitalWrite(in1,LOW); 
    digitalWrite(in2,LOW);
     }
}
 if(DHT.temperature<18)
    {
      digitalWrite(heaterbulb,HIGH);
      Serial.print("              ");
      Serial.println("Temperature is LOW :-Heater Started");             //Dht11 temperature
      
    }
   else if(DHT.temperature>38)
    {
      digitalWrite(in1,HIGH);//Fastest should be once every two seconds. 
      Serial.print("              ");
      Serial.println("Temperature is HIGH :-Cooling Fan Started"); 
    }
    else
    {
     digitalWrite(heaterbulb,LOW);
    }

Serial.println("3.LDR Sensor");

ldrstate=digitalRead(ldr);
if(ldrstate==1)
{
  Serial.print("              ");
  digitalWrite(al,HIGH);
  Serial.println("Low Sunlight :-Artificial Light Started"); 

}
else
{
    digitalWrite(al,LOW);
    
  Serial.print("              ");
  Serial.println("Required Sunlight present"); 
  Serial.println("              ");
}
if (moisture>=30 & DHT.humidity>=50<=70 & DHT.temperature>=18<=38 & ldrstate==0 )
{
  Serial.println("All Conditions Are Controlled");
  Serial.println("    ");

}
}
Serial.print("*******");
Serial.println("*******All Sensors & Devices Are Working Properly**********");
Serial.println("");

}
delay(500);
}
