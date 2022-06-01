#include <stdio.h>
int plus(int i, int j);			// i + j
int minus(int i, int j);		// i - j
int multiply(int i, int j);		// i * j
float divide(int i, int j);		// i / j

int main() {
	int a, b;
	int result;
	double result2;

	printf("input two numbers : ");
	scanf("%d %d", &a, &b);

	result = plus(a, b);
	printf("a + b = %d \n", result);
	result = minus(a, b);
	printf("a - b = %d \n", result);
	result = multiply(a, b);
	printf("a * b = %d \n", result);
	result2 = divide(a, b);
	printf("a / b = %lf \n", result2);

	return 0;
}

int plus(int i, int j) {
	return i + j;
}

int minus(int i, int j) {
	return i - j;
}

int multiply(int i, int j) {
	return i * j;
}

float divide(int i, int j) {
	return (double) i / j;
}

/*

각 함수의 원형을 만들어주면 되는 간단한 문제입니다.

*/