#include <stdio.h>
int main(void)
{       
        int a=3,b=4,result;
		char ch;
		
		scanf("%c", &ch);
		
		switch(ch)
		{
			case '+':
                result = a+b;    
				
				break;

			case '-':
                result = a-b;
                	
				break;
				
			default:
				printf("input + or - \n");
		}
            printf("%d\n",result);
			return 0;
}
