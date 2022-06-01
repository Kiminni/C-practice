/* 6-13.c 
#include <stdio.h>
int main(void)
{
		int num1=10;
		int num2=3;
		
		double result;
		
		result=num1/num2;
		printf("결과 : %lf \n", result);				// 데이터 손실 발생
			
		result=(double)num1/num2;					// 강제 형변환, 실수형/정수형
		printf("결과 : %lf \n", result);
			
		result=num1/(double)num2;					// 강제 형변환, 정수형/실수형
		printf("결과 : %lf \n", result);
			
		result=(double)num1/(double)num2;	// 강제 형변환, 실수형/실수형
		printf("결과 : %lf \n", result); 
			
		return 0;
}*/
