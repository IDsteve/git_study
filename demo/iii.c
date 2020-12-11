
#include <stdio.h>
#include <string.h>
void starnsfer(char *str, unsigned short (*array)[4])
{
	//int a,b,c,d;
	unsigned short i=0;
	
	char ch = '|';
	char *ret,*tmp=str;
	printf("str%s\n",tmp);
	while(*tmp)
	{		
		sscanf(tmp, "%hd,%hd,%hd,%hd", &array[i][0], &array[i][1], &array[i][2], &array[i][3]);
		ret = strchr(tmp, ch);
		if(ret == NULL)
		{
			*tmp = '\0';
		}
		else
		{
			i++;
			tmp=ret+1;
		}
	}
}
int main()
{
	unsigned short i =0,j=0;
	unsigned short arrays[7][4] ;
	printf("\n");
	char str[150] ="108,109,1111,1400|200,500,1000,1139|222,500,1000,1220|404,500,1000,1320|290,500,1000,1480|300,500,1000,1400|200,500,800,908";
	starnsfer(str, arrays);
	for(i=0;i<7;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%6u ",arrays[i][j]);
		}
		printf("\n");
	}
	return 1;
		
}
