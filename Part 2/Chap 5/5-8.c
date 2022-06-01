// 5-8.c 
#include <stdio.h>
	
int* func( );				// 함수의 선언
	
int main(void)
{
		int* p=NULL;
		p=func( );			// 함수의 호출
		
		printf("%d %d %d %d \n", p[0], p[1], p[2], p[3]);
		printf("%d %d %d %d \n", *(p+0), *(p+1), *(p+2), *(p+3));
		return 0;
}
	
int* func( )				// 함수의 정의
{
		int array[ ]={10, 20, 30, 40};
		return array;
}
