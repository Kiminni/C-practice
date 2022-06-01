// 파트2 3장 6번 문제

#include <stdio.h>

// 함수와 함수 포인터의 선언부에서
// 입력값의 타입 부분은
// int *p  와 int p[] 모두 가능합니다. 
// 해당 부분의 주석을 바꾸어가며 확인해보세요.


// 함수의 선언부
//void arrInput (int p[], int length);
void arrInput (int *p, int length);

int main () {
	int array[5] = {10, 20, 30, 40, 50};
	
	// 함수 포인터의 선언부
	//int (*pfunc) (int [], int);
	void (*pfunc) (int *, int);

	pfunc = arrInput;
	pfunc(array, 5);

	return 0;
}

//void arrInput (int p[], int length) {
void arrInput (int *p, int length) {
	int i = 0;

	for (i; i<length; i++) 
		printf("%d ", p[i]);

	printf("\n");
}