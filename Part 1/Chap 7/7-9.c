// 7-9.c 
#include <stdio.h>
int main(void)
{
		int i;
		for(i=0; 1; i++)
		{
			printf("반복 횟수 : %d\n", i);		// [Ctrl + C] 강제 종료

			if (i>10)
				break;
		}
		
		return 0;
	}
