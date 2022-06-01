#include <stdio.h>
int main(void)
{
	int num1 = 0, num2 = 0;
	
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
		printf("큰 수는 %d입니다. \n", num1);
	else if (num1 < num2)
		printf("큰 수는 %d입니다. \n", num2);
	else
		printf("두 수는 같습니다. \n");
	
	return 0;
}

/*
	조건문을 사용하여 세 가지 경우의 출력 결과를 달리 합니다.
*/