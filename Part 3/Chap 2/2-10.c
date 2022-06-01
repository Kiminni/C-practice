/* 2-10.c  
#include<stdio.h>
#include<string.h>

int main(void)
{
	char  array1[50] = "good-morning,good-afternoon,good-evening";
	char  array2[50] = "GOOD-MORNING,GOOD-AFTERNOON,GOOD-EVENING";
	char* p1=NULL;
	char* p2=NULL;

	p1 = strupr(array1);
	p2 = strlwr(array2);

	puts(p1);
	puts(p2);	
	return 0;
}  
*/