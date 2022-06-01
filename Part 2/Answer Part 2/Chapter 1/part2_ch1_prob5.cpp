#include <stdio.h>

int main () {
	double arr1[5] = {2.2, 3.5, 2.5, 10.1, 4.0};
	double arr2[5] = {3.3, 2.0, 4.0, 1.0, 2.5};
	int i;

	for (i = 0; i < 5; i++) 
		printf("%d 번째 수들의 곱은 %lf\n", i+1, arr1[i]*arr2[i]);
	
	return 0;
}

