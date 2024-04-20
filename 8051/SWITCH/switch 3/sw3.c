#include<reg51.h>
sbit Sw1=P2^0;
sbit Sw2=P2^1;
sbit Sw3=P2^2;
sbit Led1=P2^3;
sbit Led2=P2^4;
sbit Led3=P2^5;
void main (void)
{
Sw1=1;//act as i/p
Led1=0;//act as o/p
Sw2=1;
Led2=0;
Sw3=1;
Led3=0;
while(1)
{
if (Sw1==0)
Led1=1;
else
Led1=0;
if (Sw2==0)
Led2=1;
else
Led2=0;
if (Sw3==0)
Led3=1;
else
;Led3=0;
}//end of while
}//end of main
