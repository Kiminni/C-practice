/* 7-12.c 
#include <stdio.h>
int main( )
{
		int i;
		int factorial=1;			// int factorial;
	
		for(i=1; i<=10; i++)	// 초기 값, 조건 값, 증감 값이 모두 있는 경우
		{
			// 1*2*3*4*5*6*7*8*9*10 의 결과 저장
				factorial=factorial*i;
		}
		printf("1부터 10까지의 곱 : %d\n", factorial);
			
		return 0;	
}
*/