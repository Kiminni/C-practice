//5-6.c 
#include <stdio.h>

int* input( );			// 함수의 선언

int main(void)
{
		int* p=NULL;
		
		p=input( );			// 함수의 호출
		printf("%d \n", *p);
		
		return 0;
}
	
int* input( )				// 함수의 정의
{
		static int num1;
		scanf("%d", &num1);
		return &num1;
}
