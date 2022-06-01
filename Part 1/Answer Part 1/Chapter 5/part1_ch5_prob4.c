#include <stdio.h>

int main() {
	int a, b, c;
	int result;
	int result1;
	int result2;

	printf("input a : ");
	scanf("%d", &a);
	printf("input b : ");
	scanf("%d", &b);
	printf("input c : ");
	scanf("%d", &c);

	result1 = (a > b) ? a : b;
	result2 = (a > c) ? a : c;
	result = (result1 > result2) ? result1 : result2 ;

	printf("Result : %d \n", result);

	return 0;
}

/*

조건 연산자인 ?를 통해 if문을 사용하지 않고 간단하게 특정값이 선택되도록 합니다.
a b c 를 비교하기 위해 a와 b, a와 c를 비교한 뒤 그 결과를 다시 비교하여 출력합니다.

*/