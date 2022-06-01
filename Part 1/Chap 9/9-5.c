/* 9-5.c 
#include <stdio.h>
void func_A (void);						// 함수의 선언(00 형태)
	
int main(void)
{
		int aaa=10;								// main( ) 함수의 지역 변수 aaa
		printf("main( ) 함수의 aaa 값 : %d\n", aaa );
		
		func_A( );								// 함수의 호출
		return 0;
}
	
void func_A(void)								// 함수의 정의
{
		int aaa=20;								// func_A( ) 함수의 지역 변수 aaa
		int bbb=30;								// func_A( ) 함수의 지역 변수 bbb
		
		printf("func_A( ) 함수의 aaa 값 : %d\n", aaa );
		printf("func_A( ) 함수의 bbb 값 : %d\n", bbb );
		return ;
}
*/