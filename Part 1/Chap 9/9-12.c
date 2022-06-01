// 9-12.c 
#include <stdio.h>
void self_service(void);					// 함수의 선언(00 형태)
	
int main(void)
{
		self_service( );						// 함수의 호출
		return 0;
}
	
void self_service(void)					// 함수의 정의
{
		int i=1;							// int i=1;
		
		if(i>5)										// 함수의 무한 반복 문제를 해결하는 조건
			return;									// 값을 반환하지 않고 그냥 함수를 종료한다.
		
		printf("셀프 서비스 %d회 \n",i);
		i=i+1;				// i 값을 증가시킨다.
		self_service( );
}
