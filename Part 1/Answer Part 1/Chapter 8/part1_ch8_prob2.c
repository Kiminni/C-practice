#include <stdio.h>
int main(void)
{
	int num, divider = 100, temp;
	
	printf("3자리 십진수를 입력하세요 : ");
	scanf("%d", &num);

	while (divider > 0) {
		
		temp = num / divider % 10;
		
		if ( temp % 2)
			printf("%d : 홀수 ", temp);
		else
			printf("%d : 짝수 ", temp);

		divider /= 10;
	}
	
	printf("\n");

	return 0;
}

/*
	변수 divider 는 현재 보고 있는 자리수를 얻기 위해 입력받은 값에 나누어주는 수입니다.
	(ex. 백의 자리 수를 얻기 위해서는 100으로 나누어야 한다.)
	변수 temp 는 현재 보고 있는 자리값(0~9) 입니다.
	divider를 100부터 10, 1, 0으로 10씩 나누어 나가면서 백의 자리수부터 일의 자리수까지 확인하고
	divider가 0이 되면 while문을 탈출하여 종료합니다. 
*/