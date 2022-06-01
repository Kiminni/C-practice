/* ex3.c */
#include <stdio.h>
void main()
{
	int red = 1, blue = 2;	//1은 오랜지 주스, 2는 사이다
	int yellow;			//빈컵

	
	printf("before \n");
	printf("red = %d, blue = %d \n", red, blue);

	yellow = red;
	red = blue;
	blue = yellow;

	printf("after \n");
	printf("red = %d, blue = %d \n", red, blue);

	return 0;
}

/* 해설
	정수형 변수의 선언과 조작을 익힙니다.
*/