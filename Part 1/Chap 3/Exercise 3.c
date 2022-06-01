#include <stdio.h>

int main(void)
{

    int red = 1, blue = 2; //빨강은 1, 파랑은 2;
    int yellow;

    printf("before - red:%d, blue:%d\n",red,blue);
    yellow = red; //노랑컵에 빨강 저장
    red = blue; //빨강컵에 파랑 저장
    blue = yellow; //파랑컵에 노랑 저장

    printf("after - red:%d, blue:%d\n",red,blue);
}