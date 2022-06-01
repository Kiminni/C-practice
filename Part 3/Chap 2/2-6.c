/* 2-6.c 
#include<stdio.h>
#include<string.h>

int main(void)
{
    char array1[100];
	char array2[50];

	printf("첫번째 문자열 입력: ");
	gets(array1);

	printf("두번째 문자열 입력: ");
	gets(array2);

	strcat(array1, array2);   // 문자열 결합

    printf("결합된 문자열 출력: ");
	puts(array1);	
	return 0;
}  */