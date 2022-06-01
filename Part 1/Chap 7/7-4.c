// 7-4.c 
#include <stdio.h>
int main(void)
{
		int i=2;		// 2단부터
		int j=1;		// 2*1에서 1의 의미로 초기화
		int result=0;	// 구구단의 결과 저장 변수
		
		while(i<10)	// 9단까지
		{
			while(j<10)
			{
				result=i*j;
				printf("%d * %d = %d \n", i, j, result);
				j++;
			}
			i++;		// 단을 증가
			j=1;		// 단의 시작
			printf("--------------\n");
		}
			
		return 0;
}
