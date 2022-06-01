/* 1-1.c 
#include <stdio.h>

struct group						// 구조체 정의
{
		int a;
		double b;
};
	
int main(void)
{
		struct group g1;			// 구조체 변수 g1 선언
		
		g1.a=10;						// 구조체 변수로 멤버 변수 접근
		g1.b=1.1234;				// 구조체 변수로 멤버 변수 접근
			
		printf("g1.a의 값 : %d \n", g1.a);
		printf("g1.b의 값 : %lf \n", g1.b);
			
		return 0;
}
*/