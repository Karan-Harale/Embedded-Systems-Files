#include<Wire.h>                      

#include<SoftWire.h>                   //Library for I2C Communication functions


#define LED PA1

#define buttonpin PA0


int x = 0;


void setup() 

{ 

  

  Serial.begin(9600);                  //Begins Serial Communication at 9600 baud rate

  pinMode(buttonpin,INPUT);            //Sets pin PA0 as input 

  pinMode(LED,OUTPUT);                 //Sets PA1 as Output

  Wire.begin();                        //Begins I2C communication at pin (B6,B7)

}



void loop()

{ 

    Wire.requestFrom(8,1);               // request  bytes from slave arduino(8)

    byte a = Wire.read();                // receive a byte from the slave arduino and store in variable a

    

    if (a==1)                            //Logic to turn Master LED ON (if received value is 1) or OFF (if received value is 0)

      { 

      digitalWrite(LED,HIGH);

      Serial.println("Master LED ON");

      }

    else

      {

      digitalWrite(LED,LOW);

      Serial.println("Master LED OFF");

      }

  {

   

   int pinvalue = digitalRead(buttonpin);    //Reads the status of the pin PA0

   

  

  if(pinvalue==HIGH)                         //Logic for Setting x value (To be sent to slave Arduino) depending upon inuput from pin PA0

    {

      x=1;

    }

    

  else

   {

      x=0;

   }

  

  Wire.beginTransmission(8);                 // starts transmit to device (8-Slave Arduino Address)

  Wire.write(x);                             // sends the value x to Slave

  Wire.endTransmission();                    // stop transmitting

  delay(500);

  }

}     
