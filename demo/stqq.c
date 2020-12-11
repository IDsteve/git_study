#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[10] = "hello";
	char arr2[] = "china";
	int arr3[20];
	int i;
	char *p = NULL;
	p = arr1;
	printf("000-%s\n",p);
	printf("%s\n",arr1);
	printf("sizeof---%d\n",sizeof(arr1));
	printf("%d\n",strlen(arr1));
	printf("\n");
	printf("%d\n",sizeof(arr2));
	printf("%d\n",strlen(arr2));
	printf("sizeofarr3---%d\n",sizeof(arr3));

	return 1;
}