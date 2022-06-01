// 1-13.c 
#include <stdio.h>
	
struct student
{
		char no[10];			// 멤버 변수로 배열 선언
		char name[20];			// 멤버 변수로 배열 선언
};
	
int main(void)
{
		int i=0;
		struct student stu= {"20101323","0"};
		
		//stu = {"20101323","0"};		// 에러 발생
		//stu.name="Park";		// 에러 발생
		printf("학번 : %s, 이름 : %s \n", stu.no, stu.name);
		
		return 0;
}

