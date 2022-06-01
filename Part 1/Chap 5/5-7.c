// 5-7.c 
#include<stdio.h>
int main(void)
{
	int num1=10, num2=10;
	int a, b;

    a = ++num1;									// 전위 방식, 선 증가 후 연산 
	printf("%d, %d \n",a, num1);			// 결과는 11, 11	

  	b = num2++;									// 후위 방식, 선 연산 후 증가
	printf("%d, %d \n",b, num2);			// 결과는 10, 11

	return 0;
}
