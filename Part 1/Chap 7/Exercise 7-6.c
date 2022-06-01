#include <stdio.h>

int main(void)
{
    int num1, num2;

    while(1)
    {
        printf("input num1:");
        scanf("%d",&num1);

        printf("input num2:");
        scanf("%d",&num2);

        printf("%d + %d = %d\n ",num1,num2,num1+num2);
    }
}