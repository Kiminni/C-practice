// 1-10.c 
#include <stdio.h>
	
struct student
{
		char no[10];			// 학번
		char name[20];			// 이름
		double math;			// 수학 점수
		double english;			// 영어 점수
		double total;				// 총점
};
	
int main(void)
{
		struct student stu1={"20101323", "Park", 80, 80, 0};	// 학생 1의 정보
		struct student stu2={"20101324", "Kim", 95, 85, 0};	// 학생 2의 정보
		struct student stu3={"20101325", "Lee", 100, 90, 0};	// 학생 3의 정보
		
		stu1.total=stu1.math+stu1.english;
		printf("학번 : %s, 이름 : %s \n", stu1.no, stu1.name);	// . 연산자로 멤버 변수(배열) 접근
		printf("총점 : %lf \n", stu1.total);
		
		printf("\n");
		stu2.total=stu2.math+stu2.english;
		printf("학번 : %s, 이름 : %s \n", stu2.no, stu2.name);	// . 연산자로 멤버 변수(배열) 접근
		printf("총점 : %lf \n", stu2.total);
		
		printf("\n");
		stu3.total=stu3.math+stu3.english;
		printf("학번 : %s, 이름 : %s \n", stu3.no, stu3.name);	 // . 연산자로 멤버 변수(배열) 접근
		printf("총점 : %lf \n", stu3.total);
			
		return 0;
}