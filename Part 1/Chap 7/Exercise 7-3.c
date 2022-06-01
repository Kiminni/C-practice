#include <stdio.h>

int main(void)
{   
    int j,i;

    for(int i = 1;i < 5; i++)
    {
        for (j = 0; j < i; j++)
			printf(" ");
		
		for (;  j < 9 - i; j++)
			printf("*");
		
		printf("\n");
    }
    return 0;
}