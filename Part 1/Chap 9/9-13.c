/* 9-13.c
#include <stdio.h> 
void self_service(int n);					// 함수의 선언(00 형태)
	
int main(void)
{
		int a=1;
		self_service(a);						// 함수의 호출
		return 0;
}
	
void self_service(int n)					// 함수의 정의
{
	if(n>5)			// 함수의 무한 반복 문제를 해결하는 조건
			return;		// 값을 반환하지 않고 그냥 함수를 종료한다.
		
		printf("셀프 서비스 %d회 \n",n);
		self_service(n+1);	// 매개 변수 n을 하나 증가해서 self_service( ) 함수를 호출
} */
