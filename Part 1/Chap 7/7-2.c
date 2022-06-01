// 7-2.c
#include <stdio.h>
int main(void)
{
		int i=0, sum=0;
		while(i<=10)
		{
			sum=sum+i;
			printf("i=%d, sum=%d\n", i, sum);
			i++;				// i=i+1;
		}
		printf("------반복문 종료-------\n");
		
		return 0;
}
 