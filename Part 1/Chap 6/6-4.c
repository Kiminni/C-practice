// 6-4.c 
#include <stdio.h>
int main(void)
{
		char num1=-129;		// 최솟값보다 -1만큼 작은 값 저장(언더플로우)
		char num2=128;		// 최댓값보다 +1만큼 큰 값 저장(오버플로우)
		
		printf("%d \n", num1);	// 127 출력
		printf("%d \n", num2);	// -128출력
		
		num1=-130;	// 최솟값(-128)보다 -2만큼 작은 값 저장(언더플로우)
		num2=129;		// 최댓값(127)보다 +2만큼 큰 값 저장(오버플로우)
		
		printf("%d \n", num1);	// 126 출력
		printf("%d \n", num2);	// -127출력
		
		return 0;
}
