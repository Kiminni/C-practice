#include <stdio.h>

int main() {
	double exchange_rate = 1095.3;
	int dollar=0;

	printf("환전할 금액을 입력해주세요. : ");
	scanf("%d", &dollar);
	printf("환전된 금액 : %.2lf 원\n", dollar * exchange_rate);

	return 0;
}

/*

현재의 환율을 double형 변수에 저장하고
입력받은 금액을 환전 금액으로 출력하는 간단한 프로그램입니다.

*/