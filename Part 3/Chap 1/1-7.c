// 1-7.c 
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
		struct student stu;
		
		stu.no=20101323;
		stu.s.math=90;
		stu.s.english=80;
		stu.s.total=stu.s.math+stu.s.english;
		
		printf("학번 :  %d \n",sizeof(stu));
		printf("총점 : %lf \n", stu.s.total);
		
	return 0;
}


