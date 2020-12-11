#include<stdio.h>
typedef enum sal_type_e{
	TYPE1 = 0,
	TYPE2,
	TYPE3,
	TYPE4,
	TYPE5,
	TYPE6,
	
} sal_type_t;
void getType(int port, sal_type_t *type)
{
	if(port == 1)
	{
		*type = TYPE1;	
	}
	else if(port == 2)
	{
		*type = TYPE2;
	}
	else
	{
		*type = TYPE3;
	}
	return ;
	
}
int main()
{
	sal_type_t ty;
	int port = 2;
	//getType(port,(sal_type_t *)&ty);
	getType(port,&ty);
	printf("%d",ty);
	int a = sizeof(enum sal_type_e);
	int b = sizeof(int);
	printf("ENUM SPACE SIZE a=%d\n",a);
	printf("int space size b=%d",b);
	return 1;	
}