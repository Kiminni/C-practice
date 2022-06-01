// 8-11.c  
#include <stdio.h>
int main(void)
{
		char ch;
		
		printf("(T)hursday, (F)riday, (S)aturday\n");
		printf("문자 입력(T, F, S) : ");
		scanf("%c", &ch);
		
		switch(ch)
		{
			case 'T':
			case 't':
				printf("Thursday\n");
				break;
				
			case 'F':
			case 'f':
				printf("Friday\n");
				break;
				
			case 'S':
			case 's':
				printf("Saturday \n");
				break;
				
			default:
				printf("잘못 입력되었습니다.\n");
		}
			
			return 0;
}
