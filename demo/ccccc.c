#include <stdio.h>
#include <string.h>
void transfer( unsigned short (*array)[4],char *str)
{
	
	char i=0;
	char len;
	char pTmp[500];
	char *tmp = pTmp;
	

	while(i<2)
	{	
		sprintf(tmp,"%d,%d,%d,%d|", array[i][0], array[i][1], array[i][2], array[i][3]);
		len = strlen(tmp);
		printf("length===%d\n",len);
		tmp +=len;
		i++;
	}
	pTmp[strlen(pTmp) -1] = '\0';
	strcpy(str,pTmp);
	
	printf("\n----\n");


}
int main()
{
	unsigned short i =0,j=0;
	char strs[200];
	unsigned short arrays[2][4] ={{108,109,1111,1400},{200,500,1000,1139}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%u-",arrays[i][j]);
		}
		printf("\n");
	}
	transfer( arrays,strs);
	printf("%s\n",strs);



	return 1;
		
}
