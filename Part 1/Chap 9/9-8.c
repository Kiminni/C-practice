// 9-8.c 
#include <stdio.h>
int num;						// 전역 변수 선언, 초기화하지 않아도 0이 설정됨
int num2;
void grow(void);
	
int main(void)
{
		printf("함수 호출 전 num : %d\n", num);	// 0 출력
		
		grow( );					// 함수 호출
		printf("함수 호출 후 num : %d\n", num);
		
		return 0;
}
	
void grow(void)
{
		num=60;				// 전역 변수 num의 값 변경
}
