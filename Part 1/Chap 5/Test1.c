#include <stdio.h>

int main(void)
{
    int i,limit, big = 0, small = 0, num;
    printf("Enter your limit:");
    scanf("%d",&limit); //얼마나 할 건지4

    for(i = 0; i < limit; i++)
    {
        printf("input the number:");
       
        scanf("%d",&num); // 필요 숫자 입력
        
        if (num > big) //가장 큰 수 바뀔 때
        {
            small = big; //원래 big이 이젠 big이 아니니까 small로 내려가야 함. 그걸 이 문장이 대체.
            big = num; //가장 큰 수
        }    
        if (num > small && num < big) //두 번째로 큰 수 바뀔 때
        {
            small = num;  //small을 새로운 num이 대체
        }
    
    }
        

    printf("%d",small);

}