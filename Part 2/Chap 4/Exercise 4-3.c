#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *array[2] = {&a , &b};

    printf("%x %x\n",&a,&b);
    
    printf("%x %x\n",array[0],array[1]);

    printf("%d %d\n",*&a,*&b);
    printf("%d %d\n",*array[0],*array[1]);
}