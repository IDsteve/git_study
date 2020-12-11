#include <stdio.h>
typedef struct student{
	int a;
	int b;
}stu;
void test(int index, stu *pStu)
{
	switch (index)
	{
		case 0:
			pStu[0].a = 1;
			pStu[0].b = 2;
			pStu[1].a = 1;
			pStu[1].b = 2;
		break;
		case 1:
			pStu[0].a = 4;
			pStu[0].b = 8;
			pStu[1].a = 2;
			pStu[1].b = 6;
		break;
		case 2:
			pStu[0].a = 6;
			pStu[0].b = 12;
			pStu[1].a = 6;
			pStu[1].b = 12;
		break;
		default:
			break;
		
	}
	return;
}
int main()
{
	int i = 0;
	stu stu1[2];
	test(1, &stu1);

	for(i =0;i<2;i++)
	{

		printf("%d---%d", stu1[i].a, stu1[i].b);
		printf("\n");
	}
}