#include <stdio.h>

int main(void)
{
    int num = 0, result = 0;

    printf("Input integer:");
    scanf("%d",&num);
    
    //printf("%d의 배수:",num); -> 여기 생각 못했음
    for(int i = 1; num*i<101 ;i++)
    {
        result = num*i;
        printf("%d ",result);
    }
    printf("\n%d의 배수의 개수: %d",num, 100/num); //i-1 = n의 100이하 배수의 개수  

}