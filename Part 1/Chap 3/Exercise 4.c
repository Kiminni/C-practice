#include <stdio.h>

int main(void)
{
    int birth;
    int year; //연
    int month;//월
    int day; //일
    

    printf("생년월일을 입력하세요:(YY/MM/DD)");
    scanf("%d %d %d",&year,&month,&day);
    printf("당신은 %d년 %d월 %d일에 태어났습니다.",year,month,day);
    /*
    printf("when is your birthday:"); //
    scanf("%d",&birth); //8자리 입력
    printf("your birthday is %d\n.",birth);
    */
}