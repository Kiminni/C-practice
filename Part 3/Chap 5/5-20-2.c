/* 5-20-2.c 
#include <stdio.h>

extern double circle(int radius);		// extern은 생략 가능 == void circle(int radius);
extern double area(int radius);		// extern은 생략 가능 == void area(int radius);
	
int main(void)
{
		printf("반지름 3의 원의 둘레 : %lf \n", circle(3) );
		printf("반지름 3의 원의 넓이 : %lf \n", area(3) );
		
		return 0;
}*/
