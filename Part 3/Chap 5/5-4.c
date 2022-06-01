/* 5-4.c 
#include <stdio.h>
	
# define MAX 100			// 정수형 매크로 상수
# define PI 3.14				// 실수형 매크로 상수
	
int main(void)
{
		int a=3;
		printf("변경 전 : %d, %lf \n", MAX, PI);
		
		#undef MAX				// 매크로 해제
		#undef PI				// 매크로 해제
		
		#define MAX 1000		// 매크로 상수 재정의
		#define PI 3.141592		// 매크로 상수 재정의
		printf("변경 후 : %d, %lf \n", MAX, PI);
		
		return 0;
}*/
