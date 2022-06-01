// 1-20.c  
#include<stdio.h>
struct student
{
	char name[20];        // 이름
	int money;            // 나이
	struct student* link; // 자기 참조 구조체 포인터 변수
};
int main(void)
{
	struct student stu1 = {"Kim", 90, NULL};
	struct student stu2 = {"Lee", 80, NULL};
	struct student stu3 = {"Goo", 60, NULL};

	stu1.link = &stu2;
	stu2.link = &stu3;
	
	printf("%s %d \n", stu1.name, stu1.money);
	printf("%s %d \n", stu1.link->name, stu1.link->money);
	printf("%s %d \n", stu1.link->link->name, stu1.link->link->money);

	return 0;
}