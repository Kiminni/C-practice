// 1-27.c 
#include<stdio.h>

union point              // 공용체 정의
{
	int x;               
	int y;     
};

struct student           // 구조체 정의 
{
	int a;
	int b;
};

int main(void)
{
	printf("%d %d \n",sizeof(union point), sizeof(struct student) );

	return 0;
}
