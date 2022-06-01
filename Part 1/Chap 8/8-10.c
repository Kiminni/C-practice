// 8-10.c 
#include <stdio.h>
int main(void)
{
		int num;
		
		printf("몇 번 스위치를 누르시겠습니까? ");
		scanf("%d", &num);
		
		switch(num)
		{
			case 1:
				printf("전등이 켜짐 \n");
				break;
			
			case 2:
				printf("전등이 꺼짐 \n");
				break;
			
			case 3:
				printf("고장 \n");
				break;
			
			default:
				printf("스위치 오류 : 우리집 스위치는 1번 ~ 3번까지만 있습니다.\n");
		}
			
		return 0;
}
