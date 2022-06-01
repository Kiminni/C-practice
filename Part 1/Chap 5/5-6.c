// 5-6.c
#include<stdio.h>
int main(void)
{
	int num1=10;

	printf("%d\n",num1);			// 결과는 10

	num1++;								// num1 = num1 + 1;
	printf("%d\n",num1);			// 결과는 11
	
	++num1;								// num1 = num1 + 1;
	printf("%d\n",num1);			// 결과는 12

	--num1;								// num1 = num1 - 1;
	printf("%d\n",num1);			 // 결과는: 11

  	num1--;								// num1 = num1 - 1;
	printf("%d\n",num1);			// 결과는 10
	
	return 0;
} 