#include<stdio.h>
struct AA{
	char ch;
	int  aa;
	int  bb;
};
int main()
{
	
	int  offset1= int(&((struct AA*)0)->ch);
	int  offset2= int(&((struct AA*)0)->aa);
	int  offset3= int(&((struct AA*)0)->bb);
	printf("%d,%d,%d",offset1,offset2,offset3);
	
	return 0;
	
}