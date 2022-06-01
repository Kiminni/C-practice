#include <stdio.h>
#include <string.h>

int main()
{
    char string[10][15],temp[15];
    
    int i,j,n;   
    for(i = 0;i<10;i++)
        gets(temp);
        strcpy(string[i],temp);
    
    for(i = 0;i<10;i++)
            puts(string[i]);   
    
}