#include <stdio.h>
int main(void)
{
	int n, i;

	printf("입력(양의 정수): ");
	scanf("%d", &n);
	
	printf("%d의 배수 : ", n);
	for(i=1; n*i<=100; i++)				
		printf("%d ", n*i);	
	
	printf("\n%d의 배수 개수 : %d \n", n, i-1);

	return 0;
}

/*
	10번째 줄에서 반복문을 수행할 조건으로써 n*i<=100을 해줌으로써 
	100보다 작은 n의 배수들을 출력하게 합니다.

	반복문이 종료될 때 i는 배수가 100을 넘어가게 되는 경우까지 포함하기 때문에
	i-1은 배수의 개수가 됩니다. 
*/