// 5-11.c 
#include<stdio.h>
int main(void)
{
	int num1=2, num2=3, num3=5;
	int result1, result2, result3;

	result1 = (num1>0) && (num2<10);
	result2 = (num2<=2) || (num3>5);
	result3 = !num3;

	printf("result1에 저장된 값 %d \n",result1);  // 1(참)
	printf("result2에 저장된 값 %d \n",result2);  // 0(거짓)
	printf("result3에 저장된 값 %d \n",result3);  // 0(거짓)

	return 0;
}
