#include <stdio.h>
int main()
{
	int r;
	double pi=3.14;
	
	printf("반지름을 입력하세요 : ");
	scanf("%d", &r);

	printf("원의 넓이는 %lf입니다.\n", r*r*pi);

	return 0;
}

/* 해설
	키보드 입력을 받는 부분의 코드를 채우는 문제입니다.
	입력 받을 문자&숫자의 표현 범위에 알맞은 서식 문자를 선택해야합니다.
*/