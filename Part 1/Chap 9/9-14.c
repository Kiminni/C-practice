/* 9-14.c 
#include <stdio.h>
int factorial(int n);				// 함수의 선언(11 형태)
	
int main(void)
{
		int a;
		int result;					// 팩토리얼 계산 결과를 저장할 변수
		
		printf("정수 입력 : " );
		scanf("%d", &a);
		
		result=factorial(a);			// 함수의 호출 
		printf( "%d 팩토리얼은 : %d입니다. \n", a, result);
		return 0;
}
	
int factorial(int n)				// 함수의 정의
{
		if (n<=1)
			return 1;
			
		else
			return n * factorial(n-1);
}
*/