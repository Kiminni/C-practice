#include <stdio.h>
int main(void)
{
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < i+1; j++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}

/*
	i는 출력될 *의 줄 번호를
	j는 한 줄에서 출력되는 *의 수를 결정합니다.
*/