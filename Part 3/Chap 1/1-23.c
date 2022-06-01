// 1-23.c
#include<stdio.h>

struct point                            // 구조체 정의
{
	int x;               
	int y;     
};

void function (struct point call);      // 함수의 선언

int main(void)
{
	struct point p = {10, 20};
	function(p);                        // 값에 의한 호출 (call by value)

	return 0;
}

void function (struct point call)       // 함수의 정의
{
	printf("%d %d \n", call.x, call.y); // 10, 20 출력
}
 
 