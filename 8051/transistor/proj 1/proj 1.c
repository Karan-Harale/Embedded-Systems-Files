#include<reg51.h>
sbit sw=P2^0;
sbit buzz	=P2^1;
sbit vib=P2^2;
void main (void)
{
sw=1;//act as i/p
buzz=0;//o/p
vib=0;//o/p
while(1)
{
if(sw==0)
{
buzz=1;
vib=1;
}
{
buzz=0;
vib=0;
}
}
}
