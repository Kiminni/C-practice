// 8-2.c 
#include <stdio.h>
int main(void)
{
		int num;
		
		printf("5의 배수: \n");
		for(num=1; num<=100; num++)	// 초기 값, 조건 값, 증감 값
		{
				if(num%5==0)
					printf("%3d \n",num);		// printf("%4d\n",num);
		}
		return 0;
}
