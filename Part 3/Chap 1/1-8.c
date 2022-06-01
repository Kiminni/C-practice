// 1-8.c 
#include <stdio.h>
	
struct score
{
		double math;
		double english;
		double total;
};
	
struct student
{
		int no;
		struct score s;		// 구조체 변수 s를 구조체 student의 멤버 변수로 사용(중첩 구조체)
};
	
int main(void)
{
		struct student stu={20101323, {90, 80, 0}};
		// struct student stu={20101323, 90, 80, 0};
		
		stu.s.total=stu.s.math+stu.s.english;
		printf("학번 : %d \n", stu.no);
		printf("총점 : %lf \n", stu.s.total);
		
		return 0;
}
