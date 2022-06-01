/* 1-24.c 
#include<stdio.h>

struct point
{
	int x;               
	int y;     
};

void function (struct point* call);  // 함수의 선언

int main(void)
{
	struct point p = {10, 20};
	function(&p);  // 주소에 의한 호출 (call by reference)

	return 0;
}

void function (struct point* call)  // 함수의 정의
{
	printf("%d %d \n",   call->x, call->y);
	printf("%d %d \n", (*call).x, (*call).y);
}
 */

