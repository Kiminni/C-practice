#include <stdio.h>
int main()
{
	int operand1, operand2;
	
	while(1)
	{
		printf("첫 번째 수를 입력해 주세요 : ");
		scanf("%d", &operand1);
		printf("두 번째 수를 입력해 주세요 : ");
		scanf("%d", &operand2);

		printf("%d + %d = %d입니다. \n", operand1, operand2, operand1 + operand2);
	}
	return 0;
}

/*
	operand1, 2 를 입력받고 덧셈 결과를 출력해주는 코드가 무한 루프 내에 작성되면 됩니다. 
*/