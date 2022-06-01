#include <stdio.h>
#include <string.h>

int main()
{
    char array[100];

    gets(array);


    for(int i = 0;i<strlen(array);i++)
        if(array[i]>= 97 && array[i]<=122)
            array[i]-=32;
        
        else if(array[i]>= 65 && array[i]<= 90)
            array[i]+=32;
    
    printf("%d \n",strlen(array));
    
    puts(array);

}