#include <stdio.h>
#define CLASS_0_POWER 17.2
#define CLASS_1_POWER 9
#define SUCCESS 1
#define FAILURE 0

static int getPowerViaClass(int class1, float *power)
{
	switch(class1)
	{
		case 0:
			*power = CLASS_0_POWER;
			break;
		case 1:
			*power = CLASS_1_POWER;
			break;
		default:
			return FAILURE;
			break;
	}
	return SUCCESS;	
}
int main()
{
	float power_w;
	int cla =1;
	getPowerViaClass(cla,&power_w);
	//printf("%d\n",power_w);
	printf("%f",power_w);
	return SUCCESS;
}