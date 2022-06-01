#include <stdio.h>

int main(void)
{
    int num1, num2;
    
    printf("input 2 num:");
    scanf("%d %d",&num1,&num2);

    if(num1>num2)
        printf("%d",num1);
    
    else if(num1<num2)
        printf("%d",num2);
    
    else
        printf("=");

    return 0;
}