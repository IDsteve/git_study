#include <stdio.h>
#include <string.h>
int main()
{
	unsigned char *pTmp = NULL;
	unsigned char auArray1[] = {2,4,5,8,7,6};
	unsigned char auArray2[] = {8,8,8,8,7,6};
	int i;
	printf("\nbefore \n");
	for(i = 0; i < sizeof(auArray1); i++)
	printf("%d\n",auArray1[i]);

	

	pTmp = auArray1;
	printf("PTMP0====%d-\n",pTmp[0]);
	printf("---%p-2----%p\n",pTmp,auArray1);
	memset(auArray1, 0, sizeof(auArray1));
	printf("\n after\n");
	for(i = 0; i < sizeof(auArray1); i++)
	printf("%d\n",auArray1[i]);

	printf("PTMP1====%d-\n",pTmp[0]);


	memcpy(pTmp,auArray2,sizeof(auArray2));
	printf("hello\n");
	for(i = 0; i < sizeof(auArray1); i++)
	printf("%d\n",auArray1[i]);
	printf("PTMP2====%d-",pTmp[0]);
	return 1;
}