#include <stdio.h>

int main()
{
    int array[5] = {10,30,40,30,20};
    int *p = NULL;
    int total;

    p = array;
    for (int i = 0; i < 5; i++)
        total += *(p+i);

    printf("%d\n",total);
    return 0;

}