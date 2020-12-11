#include<stdio.h>
#define SUCCESS 1
#define FAILED 0
#define ERROR -1
int getVal(int *value,int index)
{
	if(index == 1)
	{
		*value == ERROR;
		return FAILED;
	}
	else 
	{
		return SUCCESS;
	}
	return FAILED;
}
int main()
{
	int firstIndex = 3;
	int retVal;
	int valueGet;
	retVal=getVal(&valueGet,firstIndex);
	printf("retVal = %d",retVal);
	return SUCCESS;
}