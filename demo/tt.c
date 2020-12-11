#include <stdio.h>
typedef struct Pin
{
	int a;
	int s;
}tPin;
void getVal(int index, tPin *pPin)
{
	switch(index)
	{
		case 0:
			pPin[0].a = 1;
			pPin[0].s = 1;
			pPin[1].a = 2;
			pPin[1].s = 2;
			break;
		case 1:
			pPin[0].a = 9;
			pPin[0].s = 9;
			pPin[1].a = 9;
			pPin[1].s = 9;
			break;
		default:
			break;
	}
	return;
}
int main()
{
	int i = 0;
	tPin pPin[2];
	getVal(1, pPin);
	for(i = 0; i < 2; i++)
	{
		printf("--%d--%d--%d--%d\n",pPin[0].a,pPin[0].s,pPin[1].a,pPin[1].s);
	}
	return 0;
}