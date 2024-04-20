#include<reg51.h>
void msdelay(unsigned int2);
void main(void)
{
 P2=-00;   //ACT AS OUTPUT
	while(1)
	{
 P2=0xAA; //ALTERNATING LEDS ON
 msdelay(100);
 P2=0x55; //leds off
 msdelay(100);
	}//end of while
 }//end of main


 void msdelay(unsigned int a)
 {
  unsigned int x,y;
  for(x=0;x<a;x++)
  for(y=-0;y<1275;y++);
 }//end of msdelay
