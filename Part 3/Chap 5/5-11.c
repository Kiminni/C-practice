/* 5-11.c 
#include <stdio.h>
int main(void)
{
		double num1, num2, result ; 
		printf("실수 두 개를 입력하세요 : ");
		scanf("%lf%lf", &num1, &num2);
		result=num1 / num2;
		
		if(result > 0)
		{
			printf("%lf \n", result);
			printf("컴파일 날짜 : %s \n", __DATE__);
			printf("컴파일 시간 : %s \n", __TIME__);
			printf("파일 이름 : %s \n", __FILE__);
		}
		else
		{
			printf("오류 발생 \n");
			printf("행 번호 : %d \n", __LINE__);
		}
		return 0;
}
*/
