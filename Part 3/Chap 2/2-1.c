// 2-1.c 
#include<stdio.h>
int main(void)
{
	char array1[10];
	char array2[10] = "Good luck";

	puts("문자열을 입력하세요");
	gets(array1);       // 문자열 입력 
	puts(array1);     // 문자열 출력

	puts(array2);     // 문자열 출력
	puts("Good luck");  // 문자열 출력
	
	return 0;
}