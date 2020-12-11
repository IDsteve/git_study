#include "stdio.h"
#include "string.h"
int main()
{
	char *s ="ddj";
	int j[2][2] ={{1,2},{8,4}};
	char buffer[20];
	snprintf(buffer,19,"%s--%d",s,j[1][0]);
	printf("%s",buffer);
	return 1;
}