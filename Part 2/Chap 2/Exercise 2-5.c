#include <stdio.h>

int main(void)
{
    int array[2][3] = {1,2,3,4,5,6};
    
    printf("%d %d\n",*array[0],*array[1]);
    
    printf("%d %d\n",*array[0],*(array[0])+1);
    
    printf("%d %d\n",(*(*array+0)+0),*(*(array+1)+1));
    
    
    printf("%d %d\n",*array[0],*array[1]); //주소
    printf("%d %d",&array[0][0],array[1][0]);
    
    return 0;
}