#include <stdio.h>

int main () {

	// 1 단계
	int array[3] = {10, 20, 30};
	int *ip = NULL, **ipp = NULL, i;

	// 2 단계
	ip = array;		// 배열의 이름은 주소 값이므로 & 기호가 필요 없다. 
	ipp = &ip;

	for (i = 0; i < 3; i++) 
		printf("ipp 2차원 포인터로 접근한 배열 array의 %d 번째 값은 %d 입니다. \n", i, *(*ipp+i));
	
	return 0;
}