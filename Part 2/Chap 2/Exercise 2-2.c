#include <stdio.h>

int main()
{
    int array[3][3] ={};
    int total;
    for(int i = 0;i < 3;i++)
    {
        for(int j=0;j < 3;j++)
            {
                printf("%d - %d : ",i+1,j+1);
                scanf("%d",&array[i][j]);
                total = total + array[i][j];
            }
    }
    printf("%d",total);
    
    return 0;
}