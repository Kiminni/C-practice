#include <stdio.h>
int getArea(int x, int y);

int main(void) {
	int a, b;
	int result;

	printf("밑변 길이 : ");
	scanf("%d", &a);
	printf("높이 : ");
	scanf("%d", &b);

	result = getArea(a, b);
	printf("사각형의 넓이는 %d입니다. \n", result);
	
	return 0;
}

int getArea(int x, int y) {
	return x * y;
}

/*

scanf를 이용하여 값을 입력받고 getArea라는 함수를 통해 값을 반환하는 간단한 문제입니다.

*/