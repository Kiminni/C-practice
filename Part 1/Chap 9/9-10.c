//  9-10.c 
#include <stdio.h>
#include <time.h>					// 연산 속도 측정을 위해 clock( ) 함수 사용
	
#define MAX 100000		// 백만을 상수화

int main(void)
{
		register int i;					// int i;
		clock_t startTime, endTime, result;	// clock_t는 long형
		
		startTime=clock( );			// startTime : 측정 시작
	 	for (i=0; i<=MAX; i++)		// 반복 실행
	 	{
	 		printf("%d\n", i);
	 	}
	 	endTime=clock( );			// endTime : 측정 완료
	 	
		result=endTime-startTime;	// 연산 속도
		printf("레지스터 변수 속도 : %lf초\n", (double)result/1000);
	 	return 0;
}
