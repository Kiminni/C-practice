// 8-12.c 
#include <stdio.h>
int main(void)
{
		char ch;
		
		printf("문자를 입력하세요(q를 입력하면 종료) : ");
		for (  ;  ;  )
		{
			scanf("%c", &ch);
			if(ch== 'q' || 'Q' == ch)
				break;
		}
		printf("반복문을 종료합니다.\n");
		
		return 0;
}
