#include <stdio.h>

int main() {
	int h, m, s;
	int result;

	printf("시, 분, 초를 차례로 입력 : ");
	scanf("%d %d %d", &h, &m, &s);

	result = h * 60 * 60 + m * 60 + s;

	printf("%d 초 \n", result);

	return 0;
}

/*

시 분 초를 입력 받아 이를 단위에 맞게 모두 계산하여 출력합니다.
연산자 우선순위가 적용되므로 괄호 연산 없이 풀어서 계산합니다.

*/