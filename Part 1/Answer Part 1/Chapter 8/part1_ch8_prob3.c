#include <stdio.h>
int main(void)
{
	int num;

	printf("점수를 입력하세요 : ");
	scanf("%d", &num);

	num  = num/10;

	switch (num) {
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	default:
		printf("F\n");
		break;
	}

	return 0;
}

/*
	입력받은 값은 항상 100 이하 이므로 이를 10으로 나누면 10 이하의 수가 됩니다. 
	입력받은 값을 10으로 나누어 10, 9 (즉 입력받은 값이 90~100 인 경우) 라면 A를
	8 (즉 입력받은 값이 80~89 인 경우) 라면 B를 
	나머지 경우에는 F를 출력하면 됩니다. 
*/