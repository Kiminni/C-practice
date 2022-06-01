// 9-6.c
#include <stdio.h>
int main(void)
{
		int i=0;
		int total=0;
		
		for(i=1; i<3; i++)
		{
			//int total=0;     // 지역 변수 total 선언
			total=total+i;
		}
			
		if(total<10)        // 에러 발생
		{
			printf("total 값은 %d입니다.\n", total);
		}
		
		return 0;
} 
