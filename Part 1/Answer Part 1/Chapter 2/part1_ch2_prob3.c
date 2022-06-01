/* ex3.c */

#include <stdio.h>

int main(void)
{
	int a, b;
	printf("가로 길이를 입력하세요 : ");
	scanf("%d", &a);
	printf("세로 길이를 입력하세요 : ");
	scanf("%d", &b);
	printf("직사각형의 넓이는 %d입니다.\n", a*b);
	
	return 0;
}

/* 해설
	scanf()문과 텍스트 입력을 받을 때 사용하는 서식 문자를 묻는 문제입니다.
	%d 서식 문자는 십진수형태로 출력&입력하라는 서식 문자입니다.
	다른 서식 문자도 알아보세요.
*/