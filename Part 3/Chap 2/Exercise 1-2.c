#include <stdio.h>
#include <string.h>

int main()
{
    char temp[16];
    char array[100];

    for(int i = 0;i<10;i++)
    {
        gets(temp);
        strcat(array,temp);
        strtok(array, "\o");
    }

    puts(array);
}