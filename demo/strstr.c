#include <stdio.h>
#include <string.h>
 
int main()
{
   const char haystack[20] = "RUNOOBCCCC";
   const char needle[10] = "NOOB";
   char *ret;
 
   ret = strstr(haystack, needle);
 
   printf("���ַ����ǣ� %s\n", ret);
   printf("��ַ�� %p\n", ret);
   
   return(0);
}