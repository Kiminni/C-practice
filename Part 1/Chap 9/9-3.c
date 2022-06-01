// 9-3.c 
#include <stdio.h>
double divide(double x, double y);		// 함수의 선언(11 형태)
double input(void);									// 함수의 선언(10 형태)
void output(double x);							// 함수의 선언(01 형태)
void information(void);							// 함수의 선언(00 형태)
	
int main(void)
{
		double num1, num2, result;
	
		information( );										// 함수의 호출(00 형태)
		printf("첫 번째 실수 입력 : ");
		num1=input( );									// 함수의 호출(10 형태)
			
		printf("두 번째 실수 입력 : ");
		num2=input( );									// 함수의 호출(10 형태)
	
		result=divide(num1, num2);				// 함수의 호출(11 형태)
		output(result);
		
		return 0;
}
	
double divide(double x, double y)			// 함수의 정의(11 형태)
{
		double val;
		val=x/y;
		return val;
}
double input(void)										// 함수의 정의(10 형태)
{
		double val;
		scanf("%lf", &val);
		return val;
}
void output(double x)									// 함수의 정의(01 형태)
{
		printf("나눗셈 결과 : %lf \n", x);
		return;
}
void information(void)								// 함수의 정의(00 형태)
{
		printf("---프로그램 시작---\n");
		return;
}*/
