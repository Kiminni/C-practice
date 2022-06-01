/* 1-6.c 
#include <stdio.h>
	
struct point
{
		int x;
		int y;
};
	
int main(void)
{
		struct point p1={10, 20};
		struct point p2={0, 0};
		
		p2+p1;			// 구조체 변수 간의 덧셈 연산, 에러 발생
		p2-p1;				// 구조체 변수 간의 뺄셈 연산, 에러 발생
		
		return 0;
}
*/