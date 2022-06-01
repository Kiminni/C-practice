#include <stdio.h>

void *add(int i, int j);

int main () 
{
	int a, b;
	int *p;

	printf("첫번째 수를 입력하세요: ");
	scanf("%d", &a);

	printf("두번째 수를 입력하세요: ");
	scanf("%d", &b);

	p = (int *) add(a,b);
	
	printf("결과는 %d 입니다. \n", *p);

	return 0;
}

void *add(int i, int j) 
{
	
	void *p;
	static int result;

	p = &result;

	result = i + j;

	return p;
}

void *subtract(int i, int j) {
	
	void *p;
	static int result;

	p = &result;

	result = i - j;

	return p;
}

void *multiply(int i, int j) {
	
	void *p;
	static int result;

	p = &result;

	result = i * j;

	return p;
}

void *divide(int i, int j) {
	
	void *p;
	static double result;

	p = &result;

	result = i / j;

	return p;
}