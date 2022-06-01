// 6-7.c
#include<stdio.h>
int main(void)
{
		float num1=0.123456789012345;
		double num2=0.123456789012345;
		
		printf("float형 : %f \n", num1);				// 0 .123457 출력
		printf("double형 : %lf \n", num2);		// 0 .123457 출력
		
		printf("float형 : %.15f \n", num1);		// 0.123456791043282 출력
		printf("double형 : %.15lf \n", num2);	// 0.123456789012345 출력
		
		return 0;
}
 