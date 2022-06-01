#include <stdio.h>

int main () {
	char array1[5] = {'A', 'B', 'C', 'D', 'E'};
	int array2[5] = {10, 20, 30, 40, 50};
	double array3[5] = {10.1, 20.2, 30.3, 40.4, 50.5};
	int i;

	for (i = 0; i < 5; i++) 
		printf("array1의 %d 번째 수의 주소는 %X, 값은 %c 입니다.\n", i, &array1[i], *(array1+i));
	for (i = 0; i < 5; i++) 
		printf("array2의 %d 번째 수의 주소는 %X, 값은 %d 입니다.\n", i, &array2[i], *(array2+i));
	for (i = 0; i < 5; i++) 
		printf("array3의 %d 번째 수의 주소는 %X, 값은 %lf 입니다.\n", i, &array3[i], *(array3+i));

	return 0;
}

