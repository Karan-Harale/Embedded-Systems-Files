#include<reg51.h>
sbit Sw =P2^0;
sbit led=P2^1;
void main (void)
{
Sw=1;//act as i/p
led=0;//act as o/p
while(1)
{
if(Sw==0)
led=1;
else
led=0;
}//end of while
}//end of main
