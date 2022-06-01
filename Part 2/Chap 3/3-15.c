/* 3-15.c 
#include <stdio.h>
void add(double num1, double num2);
	
int main( )
{
		double x=3.1, y=5.1;
		void (*pointer) (double, double);	// 함수 포인터 선언
		
		printf("add 함수의 주소 : %x\n", add);	// add 함수의 주소 출력
		printf("함수 포인터의 주소 : %x \n", &pointer);	// 함수 포인터의 주소 출력
		
		pointer=add;		// 함수 포인터 pointer에 함수의 시작 주소 add를 저장
		pointer(x, y);	// 함수 포인터를 이용한 호출
		
		return 0;
}
	
void add(double num1, double num2)
{
		double result;
		result=num1+num2;
		printf("%lf + %lf = %lf입니다.\n", num1, num2, result);
}*/