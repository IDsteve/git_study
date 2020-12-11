#include<stdio.h>
#include<stdlib.h>
struct aa{
	unsigned char ka;
	unsigned int  kb;
	int * p;
};
int main()
{
	struct aa *pA ;
	pA=(struct aa*)malloc(sizeof(struct aa *));
	void *pn ;
	*(struct aa **)pn = pA;
	printf("pA指向的地址----%p\n",pA);
	printf("pA自身地址-----%p\n",&pA);
	printf("pn指向的地址-----%p\n",pn);
	printf("pn的地址-----%p\n",&pn);
	
	printf("\n");
	printf("\n");
	printf("\n");
	void **ppn;
	*(struct aa **)ppn = pA;
	printf("pA指向的地址----%p\n",pA);
	printf("pA自身地址-----%p\n",&pA);
	printf("ppn指向的地址-----%p\n",*ppn);
	printf("ppn指向的PA地址-----%p\n",ppn);
	printf("ppn本身的地址-----%p\n",&ppn);
	
	return 1;
}