#include <stdio.h>

int main()
{
    int array[9][9];
    int i,j;
    int answer;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            array[i][j] = (i+1) * (j+1);
        }
    }

     for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("%d * %d = %d\n",i+1,j+1,array[i][j]);
        }
    }

}