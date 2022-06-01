// 5-10.c 
#include <stdio.h>

char* string1(void);		// 함수의 선언
char* string2(void);		// 함수의 선언
	
int main(void)
{
		char* p1=NULL;
		char* p2=NULL;
		
		p1=string1( );		// 함수의 호출
		p2=string2( );		// 함수의 호출
		
		printf("%s \n", p1);
		printf("%s \n", p2);
		return 0;
}
	
char* string1(void)		// 함수의 정의
{
		static char str[ ]="Good";		// 정적 변수의 선언
		return str;					// 배열의 시작 주소 반환
}
	
char* string2(void)				// 함수의 정의
{
		static char str[ ]="morning";	// 정적 변수의 선언
		return str;					// 배열의 시작 주소 반환
}
