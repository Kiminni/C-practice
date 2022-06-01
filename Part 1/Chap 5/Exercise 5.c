#include <stdio.h>

int main()
{
    int dollar,won = 1200;
    
    printf("Dollar to Won:");
    scanf("%d",&dollar);

    dollar = dollar * won;
    printf("%d Won",dollar);

}