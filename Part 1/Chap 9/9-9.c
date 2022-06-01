// 9-9.c 
#include <stdio.h>

void count(void);			// 함수의 선언(00 형태)
	
int main(void)
{
		count( );			// 함수의 호출
		count( );			// 함수의 호출
		count( );			// 함수의 호출
		return 0;
}
	
void count(void)			// 함수의 정의
{
		static int x=0;		// 정적 변수, 초기화를 한 번 수행
		int y=0;				// 지역 변수, 초기화를 매번 수행
	

		x=x+1;
		y=y+1;
	
		printf("x 값 : %d, y 값 : %d\n", x, y);
}
