#include <stdio.h>

int main()
{
    int array[10];
    double total = 0;
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d",&array[i]);
        total = total + array[i];    
    }
    total = total / 10;
    printf("%.1lf",total);

    return 0;
}