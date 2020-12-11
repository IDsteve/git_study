#include<stdio.h>
#include<stdlib.h>
#define SUCCESS 1
#define FAILED 0
int main()
{
	FILE *fp;
	fp = NULL;
	fp=fopen("C:\Users\jijun.wang\Downloads\notepad\a.txt","rw");
	if(fp == NULL)
	{
		printf("open error!!!\n");
		return FIALED;
	}
	int retval = 0;
	retval=fclose(fp);
	if(fp!=0)
	{
		perror("close failed \n");
		return FAILED;
		
	}
	
	return SUCCESS;
	
}