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
	printf("pAָ��ĵ�ַ----%p\n",pA);
	printf("pA�����ַ-----%p\n",&pA);
	printf("pnָ��ĵ�ַ-----%p\n",pn);
	printf("pn�ĵ�ַ-----%p\n",&pn);
	
	printf("\n");
	printf("\n");
	printf("\n");
	void **ppn;
	*(struct aa **)ppn = pA;
	printf("pAָ��ĵ�ַ----%p\n",pA);
	printf("pA�����ַ-----%p\n",&pA);
	printf("ppnָ��ĵ�ַ-----%p\n",*ppn);
	printf("ppnָ���PA��ַ-----%p\n",ppn);
	printf("ppn����ĵ�ַ-----%p\n",&ppn);
	
	return 1;
}