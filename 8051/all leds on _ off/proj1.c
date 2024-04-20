#include<reg51.h>
void msdelay(unsigned int);
void main(void)
{
	P2=00;//as o/p
	while(1)
	{
		P2=0xff;//all ked's ON
		msdelay(100);
		P2=0x00;
		msdelay(100);
	}
}


void msdelay(unsigned int a)
{
	unsigned int x,y;
	for (x=0;x<a;x++)
	for(y=0;y<1275;y++);
}//end of msdelay