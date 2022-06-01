#include <stdio.h>
int square(int x);
int cube(int x);
int quartic(int x);
int quintic(int x);

int main() {
	int a;
	int result;
	
	printf("A TABLE OF POWERS \n");
	printf("------------------------------------------------------------\n");
	printf("   INTEGER      SQUARE      CUBE      QUARTIC      QUINTIC\n");
	printf("------------------------------------------------------------\n");
	for(a=1; a<=3; a++)
	{
		printf("\t%3d\t", a);
		result=square(a);
		printf("%6d\t", result);
		result=cube(a);
		printf("%8d\t", result);
		result=quartic(a);
		printf("%5d\t", result);
		result=quintic(a);
		printf("%10d \n", result);
	}

	return 0;
}

int square(int x) {
	return x*x;
}

int cube(int x) {
	return x*x*x;
}

int quartic(int x) {
	return x*x*x*x;
}

int quintic(int x) {
	return x*x*x*x*x;
}

/*

제곱, 세제곱, 네제곱, 다섯제곱을 계산하는 함수를 각기 만들어 출력합니다.

*/