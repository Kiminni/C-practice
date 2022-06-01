#include <stdio.h>

struct student
{
	int id;
	char *lastName;
	double dData;
};

int main()
{
	struct student **pp;
	struct student *p;
	struct student stu;

	p=&stu;
	pp=&p;

	stu.id=20101323;
	stu.lastName="Park";
	stu.dData=160;

	printf("%d\n", stu.id);
	printf("%s\n", stu.lastName);
	printf("%lf\n", stu.dData);
	
	return 0;
}

/* 해설
	구조체, 구조체 포인터, 포인터와 다중 포인터에 관한 문제입니다.
	student라는 구조체를 정의하여 stu라는 변수명으로 student 구조체를 선언하고, pp와 p로 구조체 포인터를 생성하여 각각을 포인팅합니다.
	이때 pp는 이중 구조체 포인터로 구조체 포인터를 포인트 할 수 있습니다.
*/