#include<reg51.h>
void msdelay(unsigned int);
void main (void)
{
	P2=00;
	while(1)
	{
			P2=0x81;
msdelay(100);
		P2=0x42;
msdelay(100);
		P2=0x24;
msdelay(100);
		P2=0x18;
msdelay(100);
		P2=0x18;
msdelay(100);
		P2=0x24;
msdelay(100);
		P2=0x42;
msdelay(100);
		P2=0x81;
msdelay(100);
	}//end of while
}//end of main


void msdelay(unsigned int a)
{
	unsigned int x,y;
	for(x=0;x<a;x++)
	for(y=0;y<1275;y++);
}//end of msdelay