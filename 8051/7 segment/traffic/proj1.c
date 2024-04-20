#include <reg51.h>
void msdelay(unsigned int);
void main (void)
{
while(1)
{
P2=00;
P3=00;
P2=0x249;
P3=0x249;
msdelay(100);
P2=0x24c;
msdelay(100);
P2=0x24a;
msdelay(100);
P2=0x261;
msdelay(100);
P2=0x251;
msdelay(100);
P2=0x309;
msdelay(100);
P2=0x289;
msdelay(100);
P2=0x849;
msdelay(100);
P2=0x449;
msdelay(100);
P3=0x309;
msdelay(100);
P3=0x289;
msdelay(100);
P3=0x849;
msdelay(100);
P3=0x449;
msdelay(100);
P3=0x249;
msdelay(100);
P3=0x24c;
msdelay(100);
P3=0x24a;
msdelay(100);
P3=0x261;
msdelay(100);
P3=0x251;
msdelay(100);
}
}


void msdelay(unsigned int a)
{
unsigned int x,y;
for(x=0;x<a;x++)
for(y=-0;y<1275;y++);
}//end of msdelay
