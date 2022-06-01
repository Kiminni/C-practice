/* 7-14.c 
#include <stdio.h>
int main( )
{
		int i, factorial=1;
		for(i=1;  ; i++)		// 조건 값이 없는 경우(무한 루프) for(i=1; 1; i++)과 같은 의미
		{
			factorial=factorial * i;
	 		
			if (i>10)
				break;		// 무한 반복문을 탈출하기 위한 break 문
		}
		printf("1부터 10까지의 곱 : %d\n", factorial);
		
		return 0;
}
*/