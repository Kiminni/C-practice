/* 1-12.c 
#include <stdio.h>
	
struct student
{
		char no[10];
		char name[20];
		double total;
};
	
int main(void)
{
	
		struct student stu[3];
		int i=0;
		
		for(i=0; i<3; i++)
		{
	 		printf("학번 이름 총점 순으로 입력하세요 : ");
			scanf("%s %s %lf", stu[i].no, stu[i].name, &stu[i].total);
		}
		printf("\n");
		
		printf("학생 정보를 출력합니다.\n");
		for(i=0; i<3; i++)
		{
			printf(" %s %s %lf", stu[i].no, stu[i].name, stu[i].total);
			printf("\n");
		}
		
		return 0;
}
*/