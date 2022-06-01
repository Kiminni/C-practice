
#include  <stdio.h>
int main(void)
{
	int i, j;
	
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		
		for (; j < 7 - i; j++)
			printf("*");
		
		printf("\n");
	}

	return 0;
}

/*
	i는 줄번호를 나타내며, j는 한 줄에서의 각 글자를 나타냅니다.
	각 줄에서 처음 i 번째 글자까지는 공백으로 출력하고
	그 뒤부터 7 - i 번째 글자까지 *을 출력하면 됩니다. 
*/