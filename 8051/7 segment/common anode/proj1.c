#include<reg51.h>
void msdelay (unsigned int);
void main(void)
{
unsigned char a[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90},x;
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