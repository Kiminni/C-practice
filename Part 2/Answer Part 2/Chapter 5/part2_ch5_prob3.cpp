#include <stdio.h>

void arrayShift(int *p);

int main () 
{
	int array1[8] = {1, 2, 3, 4, 5, 6, 7, 8};
	int i;

	for (i = 0; i < 8; i++)
		printf("%d ", array1[i]);

	printf("\n");
	
	arrayShift(array1);
		
	for (i = 0; i < 8; i++)
		printf("%d ", array1[i]);

	printf("\n");

	return 0;
}

void arrayShift(int *p) {
	int i, temp;

	temp = p[7];

	for (i = 7; i > 0; i--) 
		p[i] = p[i-1];
	
	p[0] = temp;
}