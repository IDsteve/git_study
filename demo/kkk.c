#include "stdio.h"
#include "string.h"
int main()
{
	int array1[2][3] ={{1,2,4},{3,4,8}};
	int array2[2][3] ={0};
	printf("%d",sizeof(array1));
	memcpy(array2,array1,sizeof(array1));
	printf("%d",array2[1][0]);
	return 1;
}