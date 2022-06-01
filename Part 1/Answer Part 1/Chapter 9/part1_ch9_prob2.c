#include <stdio.h>
int sum(int x);

int main(void) {
	int i;

	for(i=1; i<=12; i++)
	{
		printf("%d ", sum(i));
	}

	printf("\n");
}

int sum(int x) {
	if (x <= 2)
		return 1;
	else
		return sum(x-1) + sum(x-2);
}

/*

토끼의 개체수 증가를 구하는 문제입니다.
재귀 함수 호출을 통해 문제를 해결합니다.

*/