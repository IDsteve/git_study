#include "stdio.h"
#include "string.h"
#define TIME_PERIODS_LEN 	4
#define	WEEKDAYS_LEN		7
#define TIME_PERIODS_SAVE_STR_LEN 22
#define SNPRINTF snprintf
#define STRLEN strlen
#define STRNCPY strncpy
void poeTimeSchedulePeriodsArrayParser( short (*au2Arr)[TIME_PERIODS_LEN],  char *u1Str)
{	
	char i4Index = 0;
	int i4Len = 0;
	char *pu1Temp = u1Str;
	while(i4Index < WEEKDAYS_LEN)
	{
        SNPRINTF(pu1Temp, 10, "%hd,%hd,%hd,%hd|", au2Arr[i4Index][0], au2Arr[i4Index][1], au2Arr[i4Index][2], au2Arr[i4Index][3]);
		i4Len = STRLEN(pu1Temp);
        pu1Temp += i4Len;
        i4Index ++;
	}
	u1Str[STRLEN(u1Str) -1] = '\0';
    return;
}
int main()
{
	 int i =0,j=0;
	 short arrays[7][4] = {{1,2,3,4}, {5,6,7,8}, {9,8,7,6}, {5,4,2,1}, {3,4,2,1}, {9,8,7,6}, {5,6,7,8}};
	 char  u1Str[100] = {0};	
	poeTimeSchedulePeriodsArrayParser(arrays, u1Str);
	printf("%s\n",u1Str);
	return 1;
		
}