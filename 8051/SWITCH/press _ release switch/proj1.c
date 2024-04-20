#include<reg51.h>
sbit sw=P2^0;
sbit led=P2^1;
void main(void)
{
sw=1;//act as i/p
led=0;//act as o/p
while(1)
{
if(sw==0)
{
while(sw==0);
led=~led;
}//end of if
}//end of while
}//end of main