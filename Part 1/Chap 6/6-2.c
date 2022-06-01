// 6-2.c
#include <stdio.h>
#include <limits.h>	// 정수형의 최솟값(MIN), 최댓값(MAX) 상수 정의
int main(void)
{
		printf("char의 최솟값 %d, 최댓값 %d \n", CHAR_MIN, CHAR_MAX);
		printf("short의 최솟값 %d, 최댓값 %d \n", SHRT_MIN, SHRT_MAX);
		printf("int의 최솟값 %d, 최댓값 %d \n", INT_MIN, INT_MAX);
		printf("long의 최솟값 %d, 최댓값 %d \n", LONG_MIN, LONG_MAX);
		
		return 0;
} 
