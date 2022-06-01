#include <stdio.h>

int main () {

	// 1단계
	int num1 = 10;
	int *ip1 = NULL, **ip2 = NULL, ***ip3 = NULL;

	// 2 단계
	ip1 = &num1;
	ip2 = &ip1;
	ip3 = &ip2;

	printf("ip3 삼차원 포인터를 사용한 num1 변수에 접근한 값은 %d입니다. \n", ***ip3);
	
	return 0;
}