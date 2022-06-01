#include <stdio.h>

int main() {
	int a, b;
	int result;

	printf("input : ");
	scanf("%d", &a);
	printf("input : ");
	scanf("%d", &b);

	(a==b) ? printf("같음 \n") : (a>b) ? printf("Smaller Number : %d \n", b) : printf("Smaller Number : %d \n", a);

	return 0;
}

/*

조건 연산자를 이용하여 문제를 해결합니다.
if-else를 이용하면 가독성이 높겠지만,
연산자에 대해 다루는 단원의 연습문제이므로 조건 연산자를 적극 이용하여 문제를 이용합니다.

*/