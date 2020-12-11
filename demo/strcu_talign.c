#include<stdio.h>
struct stu{
	char *name;              /*结构体对齐,按照结构体最长字节对齐*/
	unsigned int number;
	unsigned char age;
	float score;		
};

struct teach{
	double score;              
	unsigned int number;
	char * name;
	unsigned char age;	
};

struct tm{
	unsigned int number;
	char * name;
	unsigned char age;
	double core;		
};

struct ch{
	char name;
	short id;
	int mark;
} ch1;

int main()
{
	
	printf("****************************\n");
	printf("struct stu is %d byte \n",sizeof(struct stu));
	printf("");
	printf("****************************\n");
	printf("struct teach is %d byte \n",sizeof(struct teach));
	printf("****************************\n");
	printf("struct tm is %d byte \n",sizeof(struct tm));
	printf("****************************\n");
	printf("struct ch is %d byte \n",sizeof(struct ch));
	printf("the base_address  is %p\n", &ch1);
	printf("the address of name is %p\n", &ch1.name);
	printf("the address of id is %p\n", &ch1.id);
	printf("the address of mark is %p\n", &ch1.mark);
	return 1;
}