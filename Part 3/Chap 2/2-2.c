// 2-2.c 
#include<stdio.h>
int main(void)
{
	char array1[20];
	char array2[20];

	gets(array1);                // what is your name? 입력
	puts(array1);		         // what is your name? 출력

	scanf ("%s",array2);         // what is your name? 입력
	printf("%s \n", array2);	     // what 출력

	return 0;
} 