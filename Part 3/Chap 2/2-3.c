// 2-3.c
#include<stdio.h>
#include<string.h>

int main(void)
{
    char array1[] = "Hello C"	;
	char array2[] = "안녕하세요";

	
	printf("영문 문자열의 길이: %d \n", strlen(array1));   // 7 출력
	printf("한글 문자열의 길이 %d \n", strlen(array2) );  // 10 출력

	printf("영문 문자열의 길이: %d \n", sizeof(array1) );  // 8 출력
	printf("한글 문자열의 길이: %d \n", sizeof(array2) );  // 11 출력

	return 0;
}  