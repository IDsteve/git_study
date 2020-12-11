#include<stdio.h>
struct tree{
	int a;
	char c;
	
};
int main()
{
	struct tree *pTree;
	if(pTree==0)
		printf("error\n");
	printf("%d",NULL);
	return 0;
	
}