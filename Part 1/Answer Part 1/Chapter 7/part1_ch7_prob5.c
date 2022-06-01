#include <stdio.h>
int main()
{
	int num, i, result = 1;
	
	printf("팩토리얼 연산을 원하는 숫자를 입력하세요 : ");
	scanf("%d", &num);

	for (i = num; i > 0; i--)
		result *= i;
	
	printf("%d의 팩토리얼 연산 결과는 %d입니다. \n", num, result);

	return 0;
}

/*
	책에 제시된 힌트를 9, 10번째 줄과 같이 구현하면 됩니다.
*/