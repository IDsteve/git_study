#include<stdio.h>
#define MAC()
struct AX {
		int a;
		char b;
		int c;
		MAC()
	
};

int main()
{
	
	int len=sizeof(struct AX);
	printf("length=%d",len);
	return 0;
}