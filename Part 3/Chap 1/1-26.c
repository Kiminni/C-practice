/* 1-26.c 
#include<stdio.h>

struct point
{
	int x;               
	int y;     
};

struct point* function(void);         // 함수의 선언

int main(void)
{
	struct point* p; 

	p = function();                   // 함수 호출
	printf("%d %d \n", p->x, p->y);	
	printf("%d %d \n", (*p).x,(*p).y);

	return 0;
}

struct point* function(void)          // 함수의 정의
{
	  static struct point call = {10, 20};
	  return &call;                     // 구조체 변수 call의 주소를 13행으로 반환
}
*/ 