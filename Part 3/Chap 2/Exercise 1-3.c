#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "ABCD";
    char b[] = "ABCD";

    if(strcmp(a,b) == 0) //a==b는 안됨.
        puts("same");
    else
        puts("different");
    
    return 0;

}