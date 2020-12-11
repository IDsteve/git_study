#include<stdio.h>
#include<string.h>
int main()
{	
	char str[15]="123";
	char string[15]="charqq";
	printf(" sizeof length = %d \n", sizeof (str));
	printf("strlen length = %d \n", strlen (str));
	printf(" sizeof length = %d \n", sizeof (string));
	printf("strlen length = %d \n", strlen ( string));
	return 0;
}