// 6-10.c 
#include <stdio.h>
int main(void)
{
		char val1;
		int val2;
		
		printf("문자 입력 : ");
		scanf("%c", &val1);
		printf("ASCII 코드 값 %d입니다. \n", val1);

		printf("ASCII 코드 값 입력 : ");
		scanf("%d", &val2);
		printf("문자로 %c입니다.\n", val2);

		return 0;
}
