/* 5-9.c 
#include <stdio.h>
	
#define OUTPUT(a, b, c) a ## b ## c		// 매크로 함수 정의
	
int main(void)
{
			int a=3;
			
			printf(" %d \n", a);
			printf(" %d \n", OUTPUT(a, = , 5));		// 매크로 함수 호출
			printf(" %d \n", a);
			
			return 0;
}

*/
