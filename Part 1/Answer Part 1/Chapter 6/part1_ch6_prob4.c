#include <stdio.h>
int main(void)
{
	int c;

	printf("input = ");
	scanf("%d", &c);

	printf("입력한 코드에 해당하는 문자는 %c입니다. \n", c);

	return 0;
}

/*
	입력은 정수형으로 받고
	출력을 문자형으로 하는 문제입니다. 
*/