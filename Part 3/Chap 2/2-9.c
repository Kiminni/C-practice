/* 2-9.c
#include<stdio.h>
#include<string.h>

int main(void)
{
	char  array1[50] = "Good-morning, Good-afternoon, Good-evening";
	char  array2[10] = "morning";
	char* p1=NULL;
	char* p2=NULL;

	p1 = strchr(array1, 'a');
	p2 = strstr(array1, array2);

	printf("문자 a의 위치: %x \n", p1);
	printf("문자열: %s \n", p1);
    printf("---------------------------------------\n");
	printf("문자열의 시작 문자 위치: %x \n", p2);
	printf("문자열: %s \n", p2);
	return 0;
} 
  */