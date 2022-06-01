// 파트2 4장 1번문제
#include <stdio.h>

int main () {

	int array[5] = {10, 30, 40, 30, 20};
	int *p = NULL;
	int i, sum;

	p = array;

	for (i = 0, sum = 0; i < 5; i++) 
		sum += *(p + i);

	printf("배열의 총 합은 %d 입니다.\n", sum);

	return 0;
}