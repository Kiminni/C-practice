//  9-11.c 
#include <stdio.h>
void self_service(void);				// 함수의 선언(00 형태)
	
int main(void)
{
		self_service( );					// 함수의 호출
		return 0;
}
	
void self_service(void)				// 함수의 정의
{
		printf("셀프 서비스\n");
		self_service( );
}
