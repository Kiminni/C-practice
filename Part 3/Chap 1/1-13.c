// 1-13.c 
#include <stdio.h>
	
struct student
{
		char no[10];			// ��� ������ �迭 ����
		char name[20];			// ��� ������ �迭 ����
};
	
int main(void)
{
		int i=0;
		struct student stu= {"20101323","0"};
		
		//stu = {"20101323","0"};		// ���� �߻�
		//stu.name="Park";		// ���� �߻�
		printf("�й� : %s, �̸� : %s \n", stu.no, stu.name);
		
		return 0;
}

