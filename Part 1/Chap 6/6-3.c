 /* 6-3.c 
#include <stdio.h>
int main(void)
{
		signed char num1=130;		// -128(최솟값) ~ 127(최댓값)의 데이터 표현 범위
		unsigned char num2=130;	// 0(최솟값) ~ 256(최댓값)의 데이터 표현 범위
		
		printf("%d \n", num1);	// -126 출력
		printf("%u \n", num2);	// 130 출력
		
		return 0;
}
*/