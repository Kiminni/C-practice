#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("두 정수를 입력하세요.:");
    scanf("%d %d",&num1, &num2);
    
    
    printf("두 정수의 합: %d\n",num1+num2);
    
    if (num1 >num2) //num1이 클 때, num2가 클 때 차이.
    {
        printf("두 정수의 차: %d\n",num1-num2);
    }
    
    else
        printf("두 정수의 차: %d\n",num2 - num1);

}