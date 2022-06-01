#include <stdio.h>
int main()
{
	double r, area, length;
	
	printf("원의 반지름: ");
	scanf("%lf", &r);

	area = 3.14*r*r;
	length = 2*3.14*r;

	printf("원의 면적: %.2lf\n원의 둘레: %.2lf \n", area, length);

	return 0;
}

/*
	책에서의 힌트대로 9, 10번째 줄을 구현하면 됩니다. 
*/