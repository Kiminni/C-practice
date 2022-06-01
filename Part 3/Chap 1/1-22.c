/* 1-22.c  
#include<stdio.h>
struct point
{
	int x;     // x좌표          
	int y;     // y좌표
};
struct student
{
	char name[20];              // 이름
	struct point* link;         // 외부 참조 구조체 포인터 변수 
};
int main(void)
{
	struct student stu1 = {"Kim", NULL};
	struct student stu2 = {"Lee", NULL};
	struct point p1 = {30, 40};
	struct point p2 = {60, 80};

	stu1.link = &p1;
	stu2.link = &p2;

	printf("%s %d %d \n", stu1.name, stu1.link->x, stu1.link->y);
	printf("%s %d %d \n", stu2.name, stu2.link->x, stu2.link->y);

	return 0;
}*/
