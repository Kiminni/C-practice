#include <stdio.h>
int main()
{
	int year = 0;
	int month = 0;
	int day = 0;

	printf("생년월일을 입력하세요(yy/mm/dd) : ");
	scanf("%d/%d/%d", &year, &month, &day);

	printf("당신의 %d년 %d월 %d일에 태어났습니다. \n", year, month, day);

	return 0;
}

/* 해설
	변수의 조작과 입출력, 문자 서식에 대한 예제입니다.
*/