  #include<reg51.h>
sbit relay=P2^0;
sbit sw=P2^2;
void  main(void)
{
	sw=1;
	relay=0;
	while(1)
	{
		if(sw==0)
			relay=1;
		else
			relay=0;
	}//end of while
}//end of main