// 7-1.c 
#include <stdio.h>
int main(void)
{
		int num=0;
		while(num<5)		// num이 0, 1, 2, 3, 4일 때 '참(1)'
		{
			printf("반복 내용 : %d \n", num);
			num++;			// num=num+1;
		}
		printf("반복문을 종료한 후 : %d \n", num);	// 5 출력
		
		return 0;
}
