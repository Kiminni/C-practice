/* 5-13.c 
#include <stdio.h>
	
#define CODE 3
	
int main(void)
{
	
		#if(CODE==1)			// 실수의 나눗셈 연산
			double num1=0.0, num2=0.0, result=0.0;
			printf("실수 두 개를 입력하세요>>");
			scanf("%lf %lf", &num1, &num2);
			result=num1 / num2;
			printf("나눗셈 결과 : %lf \n", result);
			
		#else					// 정수의 덧셈 연산
			int num1=0, num2=0, result=0;
			printf("정수 두 개를 입력하세요>>");
			scanf("%d %d", &num1, &num2);
			result=num1 + num2;
			printf("덧셈 결과 : %d \n", result);
		#endif
		
		return 0;
}*/
