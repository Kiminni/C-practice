#include <stdio.h>

int main()
{   
    
    int full = 60*24*365*100;
    int del,del_year,del_month,del_day;
    int cigar = 2;
    int howmany;

    printf("담배를 하루에 몇 개피나 폈나요?");
    scanf("%d",&howmany);

    printf("%d분 만큼 수명이 깎였습니다.",del);
    printf("남은 수명은 %d년 %d일 %d시 %d분입니다.",full - del);


    return 0;

}