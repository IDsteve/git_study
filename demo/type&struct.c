#include<stdio.h>
struct stu{
	char *name;
	unsigned int number;
	unsigned char age;
	float score;
	//stu *next;
	
		
};
int main()
{
	printf("char  is %d byte \n",sizeof(char));
	printf("unsigned char  is %d byte \n",sizeof(unsigned char));
	printf("char * is %d byte \n",sizeof(char *));
	printf("short  is %d byte \n",sizeof(short));
	printf("short * is %d byte \n",sizeof(short *));
	printf(" int  is %d byte \n",sizeof(int));
	printf(" int *  is %d byte \n",sizeof(int));
	printf("unsigned int  is %d byte \n",sizeof(unsigned int));
	printf("unsigned int *  is %d byte \n",sizeof(unsigned int *));
	printf("long  is %d byte \n",sizeof(long));
	printf("long long  is %d byte \n",sizeof(long long));
	printf("float is %d byte \n",sizeof(float));
	printf("double  is %d byte \n",sizeof(double));
	printf("double * is %d byte \n",sizeof(double *));
	printf("void * is %d byte \n",sizeof(void *));
	
	printf("struct stu is %d byte \n",sizeof(struct stu));
	
	
	
	return 1;
}