/* 2-8.c
#include<stdio.h>
#include<string.h>

int main(void)
{
	char  array1[20] = "Good-morning";
	char  array2[20] = "Good-afternoon";
	char  array3[20] = "Good-evening";   
	int result1, result2, result3;

	result1 =  strcmp(array1, array2);      //  1 출력
	result2 = strncmp(array1, array2, 5);   //  0 출력
	result3 =  strcmp(array2, array3);      // -1 출력

	printf("%d %d %d \n", result1, result2, result3);
	return 0;
}
  */ 