/*  9-4.c 
#include <stdio.h>
int sum(void);						// 함수의 선언(10 형태)
int input(void);					// 함수의 선언(10 형태)
void output(int x);				// 함수의 선언(01 형태)
	
int main(void)
{
		int result;
		printf("---프로그램 시작---\n");
		printf("정수 한 개를 입력하세요 : ");
			
		result=sum( );				// 함수의 호출(10 형태)
		output(result);				// 함수의 호출(01 형태)
			
		return 0;
}
	
int sum(void)					// 함수의 정의(10 형태)
{
		int i=0, total=0, num=0;
		num=input( );				// 함수의 호출(10 형태)
		
		for(i=1; i<=num; i++)
		{
			total=total+i;
		}
		return total;
}
	
int input(void)					// 함수의 정의(10 형태)
{
		int val;
		scanf("%d", &val);
		return val;
}
void output(int x)				// 함수의 정의(01 형태)
{
		printf("결과 : %d \n", x);
		return;
}
*/