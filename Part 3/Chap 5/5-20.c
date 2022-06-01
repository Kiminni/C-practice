/* 5-20.c 
#include <stdio.h>
	
#define PI 3.14
double circle(int radius);		// 원의 둘레 함수 선언(2 파이 r)
double area(int radius);		// 원의 넓이 함수 선언(파이 r 제곱)
	
int main(void)
{
		printf("반지름 3의 원의 둘레 : %lf \n", circle(3));
		printf("반지름 3의 원의 넓이 : %lf \n", area(3));
		return 0;
}
	
double circle(int radius)		// 원의 둘레 정의
{
		double result=2 * PI * radius;
		return result;	
}
	
double area(int radius)		// 원의 넓이 정의
{
		double result=PI * radius * radius;
		return result;
}
*/
