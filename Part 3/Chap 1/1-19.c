// 1-19.c  
#include<stdio.h>

struct student
{
	char no[10];       // 학번
	char name[20];     // 이름
	double total;      // 총점
};

int main(void)
{
	struct student stu = {"20101323", "Park", 160};
	struct student*   p=NULL;
	struct student** pp=NULL;
		
	p = &stu;   
    pp = &p;

	printf("%s %s %lf \n",stu.no, stu.name, stu.total);
	
	printf("%s %s %lf \n",p->no, (*p).name, (*p).total);				// 1차원 포인터로 접근
	printf("%s %s %lf \n",p->no, p->name, p->total);					// 1차원 포인터로 접근
    
	printf("%s %s %lf \n",(**pp).no, (**pp).name, (**pp).total);	// 2차원 포인터로 접근
    printf("%s %s %lf \n",(*pp)->no, (*pp)->name, (*pp)->total); // 2차원 포인터로 접근
	printf("%s %s %lf \n",(*(*pp)).no, (*pp)->name, (*pp)->total);
	return 0;
}
