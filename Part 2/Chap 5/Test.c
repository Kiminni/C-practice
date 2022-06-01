#include <stdio.h>

void supercali (int (*p)[4], int num1, int num2);

int main()
{
    int array[2][4] = {10,20,30,40,50,60,70,80};
    supercali(array, sizeof(array)/16,sizeof(array)/8); //행 // 열
    return 0;
}

void supercali(int (*p)[4], int num1, int num2)
{
    int i,j;
    for(i=0;i<num1;i++)
    {
        for(j=0 ; j<num2 ;j++)
        {
           printf("%d ",p[i][j]);
        }
        printf("\n");    
    }
           
}
