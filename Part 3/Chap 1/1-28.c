// 1-28.c 
#include<stdio.h>

union point              // 공용체 정의
{
	int x;               
	int y;     
};

int main(void)
{
	union point p;       // 공용체 변수 선언 
	p.x = 10;            
	
	printf("%d %d \n", p.x, p.y);

	return 0;
}

