#include <stdio.h>

int main(void)
{
    int array[2][4] = {1,2,3,4,5,6,7,8};
    int array2[4][2] = {5,1,6,2,7,3,8,4};
    int array3[4][2] = {};
    int i,j;

   /* printf("%d %d %d %d\n",array[0][0],array[0][1],array[0][2],array[0][3]);
    printf("%d %d %d %d\n",array[1][0],array[1][1],array[1][2],array[1][3]);

    printf("%d %d\n",array2[0][0],array2[0][1]);
    printf("%d %d\n",array2[1][0],array2[1][1]);
    printf("%d %d\n",array2[2][0],array2[2][1]);
    printf("%d %d\n",array2[3][0],array2[3][1]);*/
    printf("%d %d %d\n",&array+1,array+1,*array+1);
    printf("%d %d %d\n",&array,array,*array);
   
    for(i = 0;i < 4; i++)
    {
        for(j=0;j < 2; j++)
        {
            array3[i][j] = array[1-i][j];
        }
    
   
    }

    for(i = 0;i < 4; i++)
    {
        for(j=0;j < 2; j++)
        {
            printf("%d\n",array3[i][j]);
        }
    
   
    }

    return 0;
}