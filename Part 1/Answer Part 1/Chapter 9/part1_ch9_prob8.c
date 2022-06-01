#include <stdio.h>
int sum(int x);

int main(void) {
	int a;
	int result;

	printf("input your number = ");
	scanf("%d", &a);
	result = sum(a);
	printf("1부터 %d까지의 합 : %d \n", a, result);

	return 0;
}

int sum(int x) {
	if(x <= 1)
		return 1;
	else 
		return x + sum(x-1);
}

/*

재귀함수를 이용하여 1부터 입력값까지의 합을 구하도록 하였습니다.
1보다 작게 되면 재귀 호출이 멈추어야하기 때문에 이때는 1을 리턴합니다.

*/