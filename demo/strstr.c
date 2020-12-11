#include <stdio.h>
#include <string.h>
 
int main()
{
   const char haystack[20] = "RUNOOBCCCC";
   const char needle[10] = "NOOB";
   char *ret;
 
   ret = strstr(haystack, needle);
 
   printf("×Ó×Ö·û´®ÊÇ£º %s\n", ret);
   printf("µØÖ·£º %p\n", ret);
   
   return(0);
}