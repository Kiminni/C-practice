 //8-13.c 
#include <stdio.h>
int main(void)
{
		int num;
		
		for(num=0; num<101; num++)
		{
			if (num%2==1)
					continue;
				
			printf("%d\n", num);
		}
			
		return 0;
}
