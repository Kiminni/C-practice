#include <stdio.h>

int main(void)
{
    int num1,num2;
    int answer;

    printf("Input:");
    scanf("%d",&num1);

    printf("Input:");
    scanf("%d",&num2);


    (num1==num2)? printf("same") : (num1>num2) ? printf("%d",num2) : printf("%d",num1); //여러번 이용 가능!!
}

// 조건1? 식1: 식2
// 얘는 조건1? 식1 : 식2 => (조건2: 식2-1 : 식2-2) //중복 가능