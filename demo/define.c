#include<stdio.h>
int main()
{
	int a ;
	scanf("please input your number:\n",&a);
	if(a == 0)	
	{
		#define ENS (0)	
	}
	else
	{
		#define ENS (1)
	}	


	
#if ENS
	printf("dis 00000000000\n");
#else
	printf("en 000000000\n");
#endif
	return 1;
	
}