#include <reg51.h>
sbit sw1=P2^0;
sbit sw2=P2^1;
sbit relay1=P2^2;
sbit relay2=P2^3;
void main (void)
{
	sw1=1;//as i/p
	sw2=1;//as i/p
	relay1=0;//as o/p
	relay2=0;//as o/p
	while(1)
	{
		if(sw1==0)
			relay1=1;
		else
			relay1=0;
		{
				if(sw2==0)
					relay2=1;
		else
			relay2=0;
	}
	}//end of while
}//end of main