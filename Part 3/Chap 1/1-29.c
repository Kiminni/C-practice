/* 1-29.c 
#include<stdio.h>

enum week {ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN};   // 열거형 정의
enum season {SPRING, SUMMER=2, FALL, WINTER};          // 열거형 정의

int main(void)
{
	enum week   p1, p2, p3;       // 열거형 변수 p1, p2, p3 선언 
	enum season s1, s2, s3, s4;   // 열거형 변수 s1, s2, s3, s4 선언 

	p1 = ONE;
	p2 = TWO;
	p3 = THREE;

	printf("%d %d %d \n", ONE, TWO, THREE );
	printf("%d %d %d \n", p1, p2, p3 );

	s1 = SPRING;
	s2 = SUMMER;
	s3 = FALL;
	s4 = WINTER;

	printf("%d %d %d %d \n", SPRING, SUMMER, FALL, WINTER );
	printf("%d %d %d %d \n", s1, s2, s3, s4 );
	return 0;
}*/ 

