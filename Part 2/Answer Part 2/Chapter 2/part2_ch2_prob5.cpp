#include <stdio.h>

int main () {

	int array[2][3] = {1, 2, 3, 4, 5, 6};
	int i, j;
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("배열 array의 %d행%d열의 주소는 %x, 값은 %d입니다. \n", i, j, *(array+i)+j, *(*(array+i)+j) );
		}
	}
	
	return 0;
}