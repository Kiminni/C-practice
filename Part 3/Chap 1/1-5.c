/* 1-5.c 
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
		
		p2=p1;						// 구조체 변수 p2에 p1을 복사
			
		printf("%d %d \n", p1.x, p1.y);
		printf("%d %d \n", p2.x, p2.y);
			
		return 0;
}

*/