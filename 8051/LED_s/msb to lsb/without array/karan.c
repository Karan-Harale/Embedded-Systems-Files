#include<reg51.h>
void msdelay(unsigned int);
void main(void)
{
unsigned char a,x;
P2=00;//act as o/p
while(1)
{
P2=0x80;
for(x=0;x<8;x++)
{
P2=a;
msdelay(10);
a=a>>1;
}//end of for
}//end of while
}//end for main

void msdelay(unsigned int a)
{
 unsigned int x,y;
 for(x=0;x<a;x++)
 for (y=0;y<1275;y++);
 }//end of msdelay
