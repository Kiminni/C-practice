#include <stdio.h>
#include <string.h>

int main()
{   
    int p1;
    char array[100];
    gets(array);

    p1 = atoi(array);

    printf("%d \n",p1);

    return 0;

}