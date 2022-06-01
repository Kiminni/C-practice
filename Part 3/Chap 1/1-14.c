//. 1-14.c 
#include <stdio.h>
#include <string.h>
	
struct student
{
		char no[10];			// 멤버 변수로 배열 선언
		char name[20];			// 멤버 변수로 배열 선언
};
	
int main(void)
{
		int i=0;
		struct student stu;
		
		strcpy(stu.no, "20101323");		// stu.no="20101323";
		strcpy(stu.name, "Park");			// stu.name="Park";
		printf("학번 : %s, 이름 : %s \n", stu.no, stu.name);
		
		return 0;
}

