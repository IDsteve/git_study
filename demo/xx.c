#include<stdio.h>
int main()
{
	int a=1;
	int v;
	for(;;)
	{
		if(a==1)
		{
			/*break;*/
			printf("break ");
		}
		v=(a>0);
		printf("v=%d",v);
	}
	printf("over");
	return 0;
}