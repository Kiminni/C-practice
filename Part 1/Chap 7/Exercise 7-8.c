#include <stdio.h>

int main(void)
{
    int num=1, result;
    int i;
    for(i = 0; num!=0 ;i++)
    {
        printf("input num:");
        scanf("%d",&num);

        result = result + num;
    }

    printf("%d %d",result, i-1);

}
