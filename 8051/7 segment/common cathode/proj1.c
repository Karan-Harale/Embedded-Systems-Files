#include<reg51.h>
void msdelay (unsigned int);
void main(void)
{
unsigned char a[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f},x;
P2=00;//act as o/p
while (1)
{
for (x=0;x<10;x++)
{
P2=a[x];
msdelay(50);
}//end of for
}//end of while
}//end of main


void msdelay (unsigned int a)
{
unsigned int x,y;
for(x=0;x<a;x++)
for(y=0;y<1275;y++);
}//end of msdelay
