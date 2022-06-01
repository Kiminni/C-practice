#include <stdio.h>

int main()
{
    char array1[5] = {'A','B','C','D','E'};
    int array2[5] = {10,20,30,40,50};
    double array3[5] = {10.1,20.2,30.3,40.4,50.5};

    for(int i = 0;i < 5; i++)
    {
        printf("-----------------------------------------------\n");
        printf("%c %x %c \n",array1[i],&array1[i],*&array1[i]);
        printf("%d %x %d \n",array2[i],&array2[i],*&array2[i]);
        printf("%.1lf %x %.1lf \n",array3[i],&array3[i],*&array3[i]);
        printf("-----------------------------------------------\n");
        printf("%x %x %x \n",array1+i,array2+i,array3+i);
        printf("%c %d %.1lf \n",*(array1+i),*(array2+i),*(array3+i));
        printf("%d",*array2);
        printf("-----------------------------------------------\n");
    
    
    }
    
    
    return 0;
}