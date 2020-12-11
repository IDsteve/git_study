#include<stdio.h>

int  main()
{
	char name[10]="siooo";
	char *pCh=NULL;
	pCh = name;
	for(int i = 0;i<10;i++)
	printf("%c",pCh[i]);
	
	return 1;
}