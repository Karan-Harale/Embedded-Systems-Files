#include<reg51.h>
void msdelay(unsigned int);
void main(void)
{
unsigned char a[]={0x18,0x24,0x42,0x81},x;
P2=00;
while(1)
{
for(x=0;x<4;x++)
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