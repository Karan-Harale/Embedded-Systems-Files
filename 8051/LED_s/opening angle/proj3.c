#include<reg51.h>
void msdelay(unsigned int a);
void main (void)
{
 P2=00; //ACT AS O/P
	while(1)
{
 P2=0X18;//TWO LEDS ON
 msdelay(100);
 P2=0x24;//nxt leds on
 msdelay(100);
 P2=0x42;//nxt leds on
 msdelay(100);
 P2=0x81;//nxt leds on
 msdelay(100);
}//end of while
 }//end of main


 void msdelay(unsigned int a)
 {
 unsigned int x,y;
 for(x=0;x<a;x++)
 for(y=0;y<1275;y++);
 }//end of msdelay