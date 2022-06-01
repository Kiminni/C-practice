#include <stdio.h>

void main() {
	int x, y, z;
	int result;

	printf("input x : ");
	scanf("%d", &x);
	printf("input y : ");
	scanf("%d", &y);
	printf("input z : ");
	scanf("%d", &z);

	result = (x+y) * (x+z) / (y%z);

	printf("( x + y ) * ( x + z ) / ( y %% z ) = %d \n", result);
}

/*

x y z를 입력 받아 연산 결과를 출력하는 단순한 문제입니다.

*/