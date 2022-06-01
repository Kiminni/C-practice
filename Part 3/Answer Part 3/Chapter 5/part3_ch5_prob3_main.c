#include "part3_ch5_prob3_score.h"

void main () {

	int arr[3] = {0};
	
	printf("국어, 영어 수학 점수를 입력하세요 : ");
	scanf("%d %d %d", arr, arr+1, arr+2);

	score(arr, 3);

}
