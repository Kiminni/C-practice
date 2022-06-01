#include <stdio.h>

int main() {
	int x=3, y=5, z=3, k=2;
	int a;

	a = x < y || x < z && z < k;
	printf("결과 값 1 a : %d \n", a);

	a = (x < y || x < z) && z < k;
	printf("결과 값 2 a : %d \n", a);

	return 0;
}

/*

결과값을 예상하고 분석해보는 문제입니다.

첫번째 a는 x가 y보다 작고 x가 z보다 작지 않으며, z가 k보다 작지 않으므로
"참 or 거짓 and 거짓"이 되어 참이 되며 값은 1을 가지게 됩니다.
(and 연산자가 우선순위를 가지며 결과적으로 "참 또는 거짓"이 되어 참이 됩니다.)

두번째 a는 
"(참 or 거짓) and 거짓)" 이 되어 거짓이 되며 값은 1을 가지게 됩니다.

*/