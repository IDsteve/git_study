#include<stdio.h>
int main()
{
	int i = 0;\
	char array[10] = {1,3,5,7,8,99};
	char *pArray = array ;
	for(i=0;pArray[i] !='\0';i++)
	{
		printf("%d-",pArray[i]);
	}
	return 0;
}