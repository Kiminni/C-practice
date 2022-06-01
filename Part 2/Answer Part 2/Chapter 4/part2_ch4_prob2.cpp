// 파트2 4장 2번문제
#include <stdio.h>

int main () {

	int array[5] = {10, 20, 30, 40, 50};
	int *p = NULL;

	p = array;
	printf("%d %d %d %d %d\n", p[0], p[1], p[2], p[3], p[4], p[5]);
	printf("%d %d %d %d %d\n", *(p+0), *(p+1), *(p+2), *(p+3), *(p+4));

	return 0;
}