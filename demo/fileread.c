#include <stdio.h>
#include <string.h>
#define EOF (-1)
#define MAX_LEN 1024
int main()
{
	FILE *fp = NULL;
	int ichar;
	char *pChar = NULL;
	char auData[MAX_LEN];
	int i = 0;
	fp = fopen("read.txt", "r");
	if( NULL == fp)
	{
		printf("open file read.txt err\n");
		return (-1);
	}
	pChar = auData;
	memset(pChar, 0, MAX_LEN);
	while((ichar = fgetc(fp)) != EOF)
	{
		
		if(ichar != '\n')
		{
			*pChar = (char)ichar;
			pChar ++;
			continue;
		}
		
		*pChar = (char)ichar;
		pChar = auData;
		for(i = 0;i < strlen(pChar); i++)
		{
			printf("%c",pChar[i]);
		}
		memset(pChar, 0, MAX_LEN);
		
	}
	return 0;

	
}