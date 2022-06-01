// 9-7.c
#include <stdio.h>
int subtract(int x, int y);					// 함수의 선언(11 형태)
	
int main(void)
{
		int a=5, b=3;
		int result=0;
		
		result=subtract(a, b);				// 함수의 호출
		printf("뺄셈 결과 : %d \n", result);
		return 0;
}
int subtract(int x, int y)					// 함수의 정의
{
		return x-y;
}
 