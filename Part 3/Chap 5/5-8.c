/* 5-8.c 
#include <stdio.h>
	
#define OUTPUT1(a, b) a + b			// 매크로 함수 정의
#define OUTPUT2(a, b) #a "+" #b	// 매크로 함수 정의
	
int main(void)
{
		printf(" %d \n", OUTPUT1(11, 22));	// 10진수 덧셈 연산
		printf(" %s \n", OUTPUT2(11, 22));	// 문자열 합치기
		
		return 0;
}
*/