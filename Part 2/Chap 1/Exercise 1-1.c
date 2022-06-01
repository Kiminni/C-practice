#include <stdio.h>

int main()
{
    char array[6]={'A','B','C'};
    char array2[6] = {};

    for(int i=0;i<3;i++)
    {
        array2[i] = array[i];
        array2[5-i] = array[i];
    }

    printf("%c %c %c %c %c %c", array2[0],array2[1],array2[2],array2[3],array2[4],array2[5]);

    return 0;
}