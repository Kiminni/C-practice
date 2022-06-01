/* 8-7.c 
#include <stdio.h>
int main(void)
{
		int num;
	
		printf("C 언어 성적 입력 : ");
		scanf("%d",&num);

		if(num>=95)
			printf("A+입니다.\n");

		else
		{
				if(num>=90)
					printf("A입니다.\n");
				
				else
				{
						if(num>=85)
							printf("B+입니다.\n");
						else
						{	
								if (num>=80)
								printf("B입니다. \n");
								
								else
								printf("F입니다. \n");
						}
				  }
			}

		return 0;
}*/
		