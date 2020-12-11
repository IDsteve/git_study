#include<stdio.h>
#define AAA 1
int main()
{
	#if defined(AAA)||defined(BBB)
	printf("hello\n");
	#else
		printf("go\n");
	#endif
	return 1;
}