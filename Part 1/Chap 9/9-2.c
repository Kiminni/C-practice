// 9-2.c 
#include <stdio.h>
int max(int a, int b)					// 함수의 정의(11 형태)
{	
		if(a > b)
			return a;
		else
			return b;
}

int min(int a, int b)					// 함수의 정의(11 형태)
{	
		if(a < b)
			return a;
		else
			return b;
}

int main(void)
{
		int i, j;
		int k;
		
		printf("숫자 두 개를 입력하세요 : ");
		scanf("%d %d", &i, &j);
		
		k = max(i, j);							//함수의 호출
		printf("%d와 %d중 큰 수는 %d입니다. \n", i, j, k);
		
		return 0;
} 
