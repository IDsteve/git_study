#include <stdio.h>
#include <string.h>
#define EOF (-1)
#define MAX_LEN 20
int main()
{
	FILE *fp = NULL;
	int ichar;
	char *pChar = NULL;
	char filename[MAX_LEN]="read.txt";
	int i = 0;
	for(i = 0;i < MAX_LEN; i++)
	{
		printf("%c",filename[i]);
	}
	fp = fopen((const char *)filename, "r");
	if( NULL == fp)
	{
		printf("open file read.txt err\n");
		return (-1);
	}
	while((ichar = fgetc(fp)) != EOF)
	{
		printf("%c",ichar);
	
	}
	return 0;

	
}