#include<reg51.h>
void msdelay(unsigned int);
void main(void)
{
unsigned char a[]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80},x;
P2=00;
while(1)
{
for(x=0;x<8;x++)
{
P2=a[x];
msdelay(20);
}//end of for
}//end of while
}//end of main


void msdelay(unsigned int a)
{
unsigned int x,y;
for(x=0;x<a;x++)
for(y=0;y<1275;y++);
}//end of msdelay