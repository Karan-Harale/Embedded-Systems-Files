#include<reg51.h>
void msdelay(unsigned int a);
void main (void)
{
 P2=00; //ACT AS O/P
	while (1)
	{
 P2=0X1;//TWO LEDS ON
 msdelay(100);
 P2=0x2;//nxt leds on
 msdelay(100);
 P2=0x4;//nxt leds on
 msdelay(100);
 P2=0x8;//nxt leds on
 msdelay(100);
  P2=0x10;//nxt leds on
 msdelay(100);
 P2=0x20;//nxt leds on
 msdelay(100);
 P2=0x40;//nxt leds on
 msdelay(100);
  P2=0x80;//nxt leds on
 msdelay(100);
	}//end of while
 }//end of main


 void msdelay(unsigned int a)
 {
 unsigned int x,y;
 for(x=0;x<a;x++)
 for(y=0;y<1275;y++);
 }//end of msdelay