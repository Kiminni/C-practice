#include <stdio.h>

int main(void)
{   
    int num1, num2; //변수 선언
    printf("가로 길이 입력:");
    printf("%d",num1);
    scanf("%d",&num1); //num1 주소에 데이터 저장
    printf("세로 길이 입력:");
    printf("%d",&num2);
    scanf("%d",&num2);

    printf("직사각형의 넓이는 %d 입니다.", num1*num2 );


}   