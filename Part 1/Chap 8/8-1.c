// 8-1.c 
#include <stdio.h>
int main(void)
{
		int num;
		printf("숫자를 입력하세요 : ");
		scanf("%d", &num);
	
		if(num>=0)
			printf("양수입니다.\n");
		
		if(num<0)
			printf("음수입니다.\n");
		
		return 0;
}
