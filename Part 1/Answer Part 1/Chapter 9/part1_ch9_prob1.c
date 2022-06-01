#include <stdio.h>
int abs(int x);

int main(void) {
	int a;
	int result=0;

	printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	result = abs(a);
	printf("절대값은 : %d입니다. \n", result);

	return 0;
}

int abs(int x) {
	if(x >= 0)
		return x;
	else
		return -x;
}

/*

절대값을 반환하는 함수를 구현하는 문제입니다.
입력값이 0보다 작으면 -를 붙여 양수로 변환시킵니다.

*/