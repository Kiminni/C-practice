/* 1-4.c 
#include <stdio.h>
	
struct point
{
		int x;
		int y;
};
	
int main(void)
{
		struct point p1={10, 20};
		struct point p2={30, 40};
		struct point p3={0, 0};
		
	 	p3.x=p2.x - p1.x;
	 	p3.y=p2.y - p1.y;
		
		printf("%d %d \n", p3.x , p3.y);
		
		return 0;
}
*/