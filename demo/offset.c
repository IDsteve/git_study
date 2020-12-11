#include<stdio.h>
#define MEM_MALLOC(Size,Type) (Type*)malloc(sizeof(node)) 
struct node{
	node *p; 
	char ch;
	int  var;
}*N;
int main()
{
	//struct node no1;
	int offset=1;
	//void *z=(void*)(((unsigned char *)N)-offset);
	//printf("z= %d\n",z);
	//printf("z= %p\n",z);
	//printf("z= %p",&z);
	printf("node = %d",sizeof(struct node));
	printf();
	
	void *q=(void*)(N + offset);
	printf("N=%p\n",N);
	printf("q=%p",q);
	
	return 1;
}