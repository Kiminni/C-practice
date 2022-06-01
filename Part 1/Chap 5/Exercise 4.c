#include <stdio.h>

int main ()
{
    int num1,num2,num3;
    int answer=0;
    printf("input 1:");
    scanf("%d",&num1);

    
    printf("input 1:");
    scanf("%d",&num2);

    
    printf("input 1:");
    scanf("%d",&num3);

    (num1>num2 && num1>num3) ? printf("%d",num1):(num2>num3) ? printf("%d",num2): printf("%d",num3);

    return 0;
   

}