#include<reg51.h>
void Send(unsigned char);
void main(void)
{
TMOD=0x20;
SCON=0x50;
	TH1=-3;
	TR1=1;
	while(1)
	{
		Send("Welcome to MET Bhujbal Knowledge City");
	}
}

void send(unsigned char mb)
{
	SBUF=mb;
	while(TI==0);
	TI=0;
}