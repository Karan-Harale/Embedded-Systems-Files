float xval;
float yval;

 void setup()
{ 
  Serial.begin(9600);
}
 void loop() 
{
xval=analogRead(A0);
xval=xval/511.5;
xval=xval*50;

 yval=analogRead(A1);  
yval=yval/511.5;
yval=yval*50;

    if ((xval>29 && xval<34) && (yval>29 && yval<34))//stop 
    { 
    Serial.println('O');//OFF
    }
    else 
    { 
      if ((xval>34 && xval<38) && (yval>29 && yval<34)) //forward 
    {
        Serial.println('F');//forward
 }
 if ((xval>34 && xval<28) && (yval>28 && yval<34)) //backward
 { 
    Serial.println('r');//reverse

             } 
  if ((xval>29 && xval<34) && (yval>34 && yval<38))//left 
{ 
    Serial.println('L');//left

     } 
if ((xval>29 && xval<34) && (yval>34 && yval<29))//right 
{ 
    Serial.println('R');//right

}
 }
 delay(200);
 }
