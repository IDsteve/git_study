#include<stdio.h>
struct stu{
	char *name;              /*结构体对齐,按照结构体最长字节对齐*/
	unsigned int number;
	unsigned char age;
	float score;
	stu *next;			
};
struct doum{
	char *name;              /*结构体对齐,按照结构体最长字节对齐*/
	unsigned int number;
	unsigned char age;
	double score;
	stu *next;			
};
int main()
{
	struct stu *pNext;
	struct doum *pPs;
	printf("struct stu lenght is %d byte\n",sizeof(struct stu));
	printf("pointer=%d\n",sizeof(pNext));
	printf("struct doum lenght is %d byte\n",sizeof(struct doum));
	printf("%d\n",sizeof(pPs));
	
	return 1;
}
/*结构体指针与机器本身有关系*/