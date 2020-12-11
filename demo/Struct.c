#include<stdio.h>
struct AA{
	int aa;
	int bb;
	char cc;
};
void getVal(int var,char *pCh)
{
	if(var==1)
	{
		*pCh=11;
	}
	else
	{
		*pCh=22;
	}
}
int main()
{
	int variable = 2;
	char ps;
	getVal(variable,);
	
	(struct AA *)ps;
	printf("%d,%d,%d",pAA->aa,pAA->bb,pAA->cc);
	
	return 0;
}