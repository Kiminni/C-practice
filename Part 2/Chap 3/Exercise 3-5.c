#include <stdio.h>

int main()
{
    int array[3] = {10,20,30};
    int* ip = NULL;
    int** ipp = NULL;

    ip = array;
    ipp = &ip;

    printf("%d %d %d %d\n",*ip,*(ip+1),*ip+2,*(ip+2));

    for(int i = 0; i < 3; i++)
        printf("%d\n",*(*ipp+i));

    return 0;
}