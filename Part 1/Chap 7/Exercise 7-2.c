#include <stdio.h>

int main(void)
{
    int num = 0;
    
    for(int i=1;i<6;i++)
    {
        
        for(int j=1; j<i+1 ;j++) //
        {
            printf("*");
        }
        printf(" \n");
    
    }
    return 0;
}