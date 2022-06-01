#include <stdio.h>

int main()
{
    char *string[2] = {"I Love C","Hello World"};

    printf("%s %s",string[0],string[1]+6); 
    return 0;
}