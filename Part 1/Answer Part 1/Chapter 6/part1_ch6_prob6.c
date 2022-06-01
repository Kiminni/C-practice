#include <stdio.h>
int main()
{
	double r, v, result;
	
	printf("원형 트랙의 반지름(km): ");
	scanf("%lf", &r);
	printf("자동차의 속도(km/h): ");
	scanf("%lf", &v);

	result = (2*3.14*r)*60/v;

	printf("자동차가 트랙을 한바퀴 완주하는데 걸리는 시간은 %.3lf분 입니다.", result);

	return 0;
}

/*
	11번째 줄의 (2*3.14*r)는 트랙의 둘레를 계산한 것이고 
	여기에 곱해주는 60은 시간단위를 분단위로 바꾸기 위한 것입니다. 
*/