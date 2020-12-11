#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct pas 
{
	int name;
	int cla;
	int num;
}pst;
int main()
{
	int ret;
	pst psta,pstb;
	memset(&psta,0,sizeof(pst));
	memset(&pstb,0,sizeof(pst));
	psta.name = 10;
	psta.cla = 1;
	psta.num = 5;
	
	pstb.name = 10;
	pstb.cla = 1;
	pstb.num = 3;
	ret = memcmp(&psta,&pstb,sizeof(pst));
	printf("%d\n",ret);
	return 1;
	
	
}