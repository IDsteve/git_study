#include<stdio.h>
#define MAX_LEN 8
int main()
{
	char auName[MAX_LEN];
	int count = 255;
	
	auName[0]=(char)((char)(count>>16)+'0');
	auName[1]=(char)((char)(count>>8)+'0');
	auName[2]=(char)(char(count)+'0');
	auName[3]='r';
	for(int i=0;i<MAX_LEN;i++)
	{
		printf("%c",auName[i]);
		printf("\n");
	}
	
	return 1;
	
}