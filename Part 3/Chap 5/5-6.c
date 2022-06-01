/*  5-6.c
#include <stdio.h>
	
#define MUL(x, y) x * y			// 매크로 함수
int mul(x, y);						// 일반 함수 선언
	
int main(void)
{
		int a, b;
		
		printf("두 개의 정수를 입력하세요 : ");
		scanf("%d %d", &a, &b);
		
		printf("매크로 함수 호출 결과 : %d \n", MUL(a+1, b+1) );	// 매크로 함수 호출
		printf("일반 함수 호출 결과 : %d \n", mul(a+1, b+1));		// 일반 함수 호출

		return 0;
 }

int mul(x, y)						// 일반 함수의 정의
{
	return x * y;
} 
*/