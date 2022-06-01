// 4-4.c
#include<stdio.h>
int main(void)
{
	printf("문자 상수 %c %c %c 는 \n",'a','b','c');
    printf("ASCII 코드 10진수로 %d %d %d \n",'a','b','c') ; //아스키코드로 매핑 되어 있음.=> 문자 상수.
    printf("ASCII 코드 16진수로 %x %x %x \n",'a','b','c');

	printf("\n-----------------------\n");

	printf("문자 상수 %c %c %c 는 \n",'!','@','#');
    printf("ASCII 코드 10진수로  %d %d %d \n",'!','@','#');
	printf("ASCII 코드 16진수로  %x %x %x \n",'!','@','#');
	
	return 0;
} 