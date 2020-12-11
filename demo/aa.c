#include <stdio.h>
typedef enum st_e
{
	A = -2,
	B,
	C,
	D
}st_t;

int main()
{
	printf("%d\n",sizeof(st_t));
	printf("%d\n",(B<<10));
	printf("%d\n",(B<<20));
	printf("%d\n",(B>>10));
	
}