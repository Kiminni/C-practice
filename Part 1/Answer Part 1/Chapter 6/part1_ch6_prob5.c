#include <stdio.h>
int main()
{
	double result;
	double input1;
	double input2;

	printf("input 2 numbers = ");
	scanf("%lf %lf", &input1, &input2);

	result = input1/input2;
	printf("나눗셈 결과 = %lf \n", result);

	return 0;
}

/*
	사용자가 입력하는 실수까지 받을 수 있어야 하고 
	(정수 간의 나눗셈이라 하더라도) 실수형의 결과값도 다룰 수 있어야 하기 때문에
	변수들을 double 형으로 선언해야 합니다. 
*/