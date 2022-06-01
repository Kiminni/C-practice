// 1-18.c
#include<stdio.h>

struct student
{
	char no[10];       // 학번
	char name[20]; // 이름
	double total;      // 총점
};

int main(void)
{
	struct student stu = {"20101323", "Park", 160};
	struct student* p=NULL;	                                    // 1차원 구조체 포인터 변수 선언
	
	p = &stu;
	printf("%s %s %lf \n",stu.no, stu.name, stu.total);
	printf("%s %s %lf \n",(*p).no, (*p).name, (*p).total);  // 1차원 포인터를 이용한 접근
	printf("%s %s %lf \n",p->no, p->name, p->total);	    // 1차원 포인터를 이용한 접근

	return 0;
} 