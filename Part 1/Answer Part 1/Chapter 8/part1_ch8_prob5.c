#include <stdio.h>
int main(void)
{
	int a, b, c;

	printf("input : ");
	scanf("%d", &a);
	printf("input : ");
	scanf("%d", &b);
	printf("input : ");
	scanf("%d", &c);

	if(a>=b)
		if(a>=c)
			printf("result : %d\n", a);
		else
			printf("result : %d\n", c);
	else
		if(b>=c)
			printf("result : %d\n", b);
		else
			printf("result : %d\n", c);
	
	return 0;
}

/*
	세 수 중 가장 큰 수를 얻기 위해서는 최소 두번의 비교가 필요합니다. 
	단, 같은 수를 입력받은 경우도 처리되어야 하기 때문에
	비교 연산자 중 >=, <= 를 사용하면 됩니다. 
*/