#include<stdio.h>
#include<stdlib.h>
struct st{
	int price;
	char *pTime;
	char *age;
	int max;
};
int main()
{
	struct st *ps;
	ps=(struct st *)malloc(sizeof(struct st));
	int offset;
	int a=1;
	offset=ps->age - ps->pTime +a;
	printf("%d",offset);
	return 0;
}