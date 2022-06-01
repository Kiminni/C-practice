// test1.c 
#include<stdio.h>
int main(void)
{
	extern int num1;		 // extern 변수
	extern int num2;		 // extern 변수
	extern int num3;		 // extern 변수

	printf("num1의 값: %d \n", num1);
	printf("num2의 값: %d \n", num2);
	printf("num3의 값: %d \n", num3);
	printf("덧셈결과: %d \n", num1 + num2 + num3);
	return 0;
}