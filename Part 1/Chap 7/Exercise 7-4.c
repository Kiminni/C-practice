#include <stdio.h>

int main(void)
{
    int num,result;
    printf("input:");
    scanf("%d",&num);
    
    for(int i = 0; i < 10; i++)
    {
        result = num*i;
        printf("%d * %d = %d\n",num,i,result);
    }

    return 0;
}
