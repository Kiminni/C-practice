#include <stdio.h>

int main(){
	int i1, i2, sum, sub;
	
	printf("두 정수를 입력하세요 : ");
	scanf("%d%d", &i1, &i2);

	sum = i1 + i2;
	sub = i1 - i2;
	printf("합 : %d + %d = %d\n", i1, i2, sum);
	printf("차 : %d - %d = %d\n", i1, i2, sub);

	return 0;
}

/* 해설
	printf()와 scanf()의 서식문자를 사용하여 알맞은 형태로 출력하는 문제입니다.
	서식문자에 따른 표현 형태와 범위를 알아야 합니다.
	*/