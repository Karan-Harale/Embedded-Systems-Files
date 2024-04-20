#include<reg51.h>
void msdelay(unsigned int a);
void main (void)
{
 P2=00; //ACT AS O/P
 P2=0X81;//TWO LEDS ON
 msdelay(100);
 P2=0x42;//nxt leds on
 msdelay(90);
 P2=0x24;//nxt leds on
 msdelay(80);
 P2=0x18;//nxt leds on
 msdelay(70);
 }//end of main


 void msdelay(unsigned int a)
 {
 unsigned int x,y;
 for(x=0;x<a;x++)
 for(y=0;y<1275;y++);
 }//end of msdelay
