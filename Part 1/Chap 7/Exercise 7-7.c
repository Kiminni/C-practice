#include <stdio.h>

int main(void)
{
    int score,result=0;
    int avg;

    for(int i = 1; i < 11; i++)
    {
        printf("score:",i);
        scanf("%d",&score);

        result = result + score;

    }
    avg = result/10;
    printf("avg: %d",avg);
}