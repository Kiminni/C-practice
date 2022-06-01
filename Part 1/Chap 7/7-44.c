#include <stdio.h>

int main()
{
    int i = 0; //큰 루프
    int j = 0; //작은 루프

    while(i<3) 
    {
        printf("big loop\n");
        while(j<3)
        {
            printf("small loop\n");
            j++; //작은 루프 수 증가 3 되면 나감
        }

        i++; //큰 루프 수 증가
        j=0; //작은 루프 초기화 다시 돌아야 하니까
    }



}