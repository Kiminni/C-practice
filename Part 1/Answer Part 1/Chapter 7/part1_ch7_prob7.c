#include <stdio.h>
int main()
{
	int i, score;
	double sum = 0;
	
	printf("열 과목의 점수를 평균 계산합니다. \n");
	
	for (i = 0; i < 10; i++)
	{
		printf("점수를 입력해 주세요 : ");
		scanf("%d", &score);
		sum += score;
	}
	
	printf("열 과목 점수의 평균은 %.1lf점입니다. \n", sum/10);

	return 0;
}

/*
	반복문이 10번 반복되면서 점수를 입력받고 
	입력받을 때마다 sum 변수에 누적한 뒤
	10으로 나누어 출력하면 됩니다. 
*/