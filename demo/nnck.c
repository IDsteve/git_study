#include<stdio.h>
#define ADDR 0
int main()
{
	#if ADDR
		printf("hello ADDR\n");
	#endif
	
	printf("1111");
	
}