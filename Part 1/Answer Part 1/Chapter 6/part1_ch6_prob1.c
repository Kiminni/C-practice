#include <stdio.h>
int main()
{
	//int num; 
	double num;

	printf("실수를 입력하세요 : ");
	//scanf("%d", &num);
	scanf("%lf", &num);

	//printf("당신이 입력한 수는 %d입니다. \n", num);
	printf("당신이 입력한 수는 %.2lf입니다. \n", num);
	return 0;
}

/*
	실수를 입력받고 출력할 수 있도록 수정하는 문제입니다.
	4, 8, 11 번째 줄은 int, 즉 정수를 다루기 위한 코드이므로
	5, 9, 12 번째 줄과 같이 수정되어야 합니다. 
	12번째 줄의 서식문자 %lf 사이의 .2는 소수점 둘째자리까지 표시함을 의미합니다. 
*/