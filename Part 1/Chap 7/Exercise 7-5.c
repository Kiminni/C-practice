#include <stdio.h>

int main(void)
{
    int result=1, num;

    
    printf("factorial input:");
    scanf("%d",&num);

    for(int i=1;i<num+1;i++)
    {
        result = result * i;
    }
    
    printf("%d\n",result);

    return 0;
}