#include <stdio.h>
#include <string.h>

int main()
{
    char array[100];

    gets(array);
    strrev(array);
    puts(array);

    return 0;
}