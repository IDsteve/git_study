#include<stdio.h>
#include<string.h>
int main()
{
	int array1[10]={1,2,3,4};
	int array2[11]={1,2,3,4,5};
	int ret = -1;
	ret = memcmp(array1,array2,sizeof(array1));
	printf("%d\n",ret);
	printf("%s",array1[1]);
	
	return 1;
}