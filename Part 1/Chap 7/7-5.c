// 7-5.c 
#include <stdio.h>
int main(void)
{
		int num=0, j=9, result=0;
 		printf("숫자를 입력하세요 : ");
		scanf("%d", &num);
		
		while(num>0)
		{
			while(j>0)
			{
				result=num*j;
				printf("%d * %d = %d\n", num, j, result);
				j--;
			}
			num--;
			j=9;
			printf("--------\n");
		}
		
		return 0;
}
