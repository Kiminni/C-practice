#include <stdio.h>

int main () {
	int arr[9] = {0};
	int inputNum = 0, i = 0;

	printf("구구단을 계산할 수를 입력하세요: ");
	scanf("%d", &inputNum);

	for (i = 0; i < 9; i++) 
		arr[i] = inputNum * (i+1);

	for (i = 0; i < 9; i++) 
		printf("%d x %d = %d\n", inputNum, i+1, arr[i]);

	return 0;
}

