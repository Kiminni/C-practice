#include <stdio.h>

int main () {
	int arr[15] = {90, 78, 77, 98, 98,
		           80, 45, 67, 88, 57,
				   88, 99, 65, 55, 74};

	int horizonSum[3] = {0};
	int verticalSum[5] = {0};
	int totalSum = 0;
	int i;

	for (i = 0; i < 15; i++) {
		horizonSum[i/5] += arr[i];
		verticalSum[i%5] += arr[i];
		totalSum += arr[i];
	}
	
	printf("가로줄의 합은 각각 ");
	for (i = 0; i < 3; i++) 
		printf("%d ", horizonSum[i]);
	printf("이며, \n세로줄의 합은 각각 ");
	for (i = 0; i < 5; i++)
		printf("%d ", verticalSum[i]);
	printf("이며, \n총 합은 %d 입니다.\n", totalSum);

	return 0;
}

/*
	배열은 테이블의 값을 가로로 읽어나가며 1차원 배열에 순서대로 값을 저장합니다.
	가로줄의 경우 배열 인덱스를 5로 나눈 몫을 사용하면 0, 1, 2 번째 행의 합을 계산할 수 있습니다.
	세로줄의 경우 배열 인덱스를 3으로 나눈 나머지를 사용하면 0, 1, 2, 3, 4 번째 열의 값을 계산할 수 있습니다.
*/