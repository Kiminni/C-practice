// 3-7.c
#include<stdio.h>
int main(void)
{
	int a;	// 변수의 선언
	int b;	// 변수의 선언

	a=1;
	b=2;

	int c;	// 변수의 선언, 에러 발생 -> 변수의 선언은 맨 앞에 한다.
	c=3;

	printf("a의 값: %d \n", a);
	printf("b의 값: %d \n", b);
	printf("c의 값: %d \n", c);

	return 0;
} 