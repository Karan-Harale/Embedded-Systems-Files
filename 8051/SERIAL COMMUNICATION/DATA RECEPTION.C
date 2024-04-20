#include<reg51.h>
sbit rs=P2^0;
sbit rw=P2^1;
sbit en=P2^2;
void msdelay(unsigned int);
void lcdcmd(unsigned char);
void lcddata(unsigned char [],unsigned char);
void lcddata_c(unsigned char);
void main(void)
{
	unsigned char dt;
 P0=00;
	rs=0;
	rw=0;
	en=0;
	TMOD=0x20;
	SCON=0x50;
	TH1=-3;
	TR1=1;
	lcdcmd(0x38);
	lcdcmd(0x0f);
	lcdcmd(0x06);
	lcdcmd(0x01);
	
	lcdcmd(0x80);
	lcddata("data rec*n",1);
	lcdcmd(0x90);
	lcddata("system",6);
	while(1)
	{
		while(RI==0);
dt=SBUF;
RI=0;
		lcddata_c(dt);
	}
}
void lcddata_c(unsigned char dt)
{
	P0=dt;
	rs=1;
	rw=0;
	en=1;
msdelay(5);
	en=0;
}

void msdelay(unsigned int a)
{
	unsigned char x,y;
	for(x=0;x<a;x++)
	for(y=0;y<1275;y++);
}//


void lcdcmd(unsigned char cmd)
{
P0=cmd;
	rs=0;
	rw=0;
	en=1;
	msdelay(5);
	en=0;
}

void lcddata(unsigned char a[],unsigned char len)
{
	unsigned char x;
	for(x=0;x<len;x++)
	{
P0=a[x];
		rs=1;
		rw=0;
		en=1;
		msdelay(5);
		en=0;
	}
}