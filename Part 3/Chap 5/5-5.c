// 5-5.c 

#include <stdio.h>
	
#define MUL(x, y) x*y				// 매크로 함수 정의
	
int main(void)
{
		int a, b;
		double c, d;
		
		printf("두 개의 정수를 입력하세요 : ");
		scanf("%d%d", &a, &b);
		printf("%d * %d = %d \n", a, b, MUL(a, b));	// 매크로 함수 호출
		
		printf("두 개의 실수를 입력하세요 : ");
		scanf("%lf%lf", &c, &d);
		printf("%lf * %lf = %lf\n", c, d, MUL(c, d));	// 매크로 함수 호출
		
		return 0;
}
