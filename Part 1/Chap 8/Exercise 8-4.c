#include <stdio.h>

int main(void)
{   
    for(int num = 1; num < 101; num++)
        {
            if(num%2==0)
                continue;

            printf("%3d",num);
        }
    return 0;
}