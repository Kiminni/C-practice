/* 5-2.c 
#include <stdio.h>
	
int func(int* i);			// 함수의 선언, 11 형태
	
void main( )
{
		int a=10;
		int result=0;
		
		result=func(&a);		// 함수의 호출, 주소에 의한 호출
		printf("%d\n", result);
		printf("%d\n", a);
}
	
int func(int* i)			// 함수의 정의
{
		*i=*i+1;				// a=a+1
		return *i;
}
*/
