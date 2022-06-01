/* 1-9.c 
#include <stdio.h>
	
typedef struct score				// 구조체에서 typedef를 사용하는 방법 1
{
		double math;
		double english;
		double average;
} SCORE;
	
struct student
{
		int no;
		SCORE s;					// struct socre s;
};
	
typedef struct student STUDENT;	// 구조체에서 typedef를 사용하는 방법 2

int main(void)
{
			STUDENT stu={20101323, {90, 80, 0}};
			
			stu.s. average=(stu.s.math+stu.s.english)/2;
			printf("학번 : %d \n", stu.no);
			printf("평균 점수 : %lf \n", stu.s.average);
			
			return 0;
}
*/