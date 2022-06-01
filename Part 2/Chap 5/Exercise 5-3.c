#include <stdio.h>

void arrayshift(int *arr);
int main()
{
    int array[8] = {1,2,3,4,5,6,7,8};

    printf("Before: ");
    
    for(int i = 0;i < 8; i++)
        printf("%d ",array[i]);
    
    printf("\n");

    
    arrayshift(array);
    for(int i = 0;i < 8; i++)
        printf("%d ",array[i]);

    return 0;
}

void arrayshift(int *arr)
{   
    int i = 0,temp = arr[7];
    printf("after: ");
    for(i = 7;i > 0 ; i--)
    {   
        arr[i] = arr[i-1];
    }

    arr[0] = temp;
}



  