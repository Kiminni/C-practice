/* 1-16.c 
#include<stdio.h>

struct point
{
	int*  x;
	int** y;
	
};

int main(void)
{
	int num1 = 3;
	struct point p1;

	p1.x = &num1;
	p1.y = &p1.x;

	printf("%d %d %d \n", num1, *p1.x, **p1.y);

	return 0;
}*/