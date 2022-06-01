#include <stdio.h>

int main () {

	// 1단계
	int num1 = 10;
	int *ip1 = NULL, **ip2 = NULL, ***ip3 = NULL;
	printf("num1 변수 값은 %d입니다. \n", num1);

	// 2 단계
	ip1 = &num1;
	ip2 = &ip1;
	ip3 = &ip2;

	*ip1 += 10;
	printf("num1 변수 값은 %d입니다. \n", num1);

	// 3 단계
	**ip2 += 10;
	printf("num1 변수 값은 %d입니다. \n", num1);
	
	// 4 단계
	***ip3 += 10;
	printf("num1 변수 값은 %d입니다. \n", num1);
	
	return 0;
}