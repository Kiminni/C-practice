#include <stdio.h>

struct point
{
	unsigned int num;
	char bloodtype[2];
	double optical1, optical2;
	int weight;
};

int main ()
{
	struct point stu;

	return 0;
}


/*

구조체의 기본적인 정의를 해보는 문제입니다.
혈액형의 경우 AB형이라는 2글자를 필요로 하는 정보가 있기 때문에 2개의 배열로 저장합니다.

*/
