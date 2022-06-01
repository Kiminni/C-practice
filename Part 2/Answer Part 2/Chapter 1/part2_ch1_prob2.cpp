
#include <stdio.h>

int main () {
	int jumsu[10], i, sum=0;

	for (i = 0; i < 10; i++) {
		printf("%d번째 학생의 점수는? ", i+1);
		scanf("%d", &jumsu[i]);
	}

	for (i = 0; i < 10; i++) 
		sum += jumsu[i]; // sum = sum + jumsu[i];

	printf("총점 %d, 평균 %lf\n", sum, (double)sum/10);

	return 0;
}
