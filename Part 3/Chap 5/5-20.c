/* 5-20.c 
#include <stdio.h>
	
#define PI 3.14
double circle(int radius);		// ���� �ѷ� �Լ� ����(2 ���� r)
double area(int radius);		// ���� ���� �Լ� ����(���� r ����)
	
int main(void)
{
		printf("������ 3�� ���� �ѷ� : %lf \n", circle(3));
		printf("������ 3�� ���� ���� : %lf \n", area(3));
		return 0;
}
	
double circle(int radius)		// ���� �ѷ� ����
{
		double result=2 * PI * radius;
		return result;	
}
	
double area(int radius)		// ���� ���� ����
{
		double result=PI * radius * radius;
		return result;
}
*/