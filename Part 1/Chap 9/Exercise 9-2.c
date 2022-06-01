#include <stdio.h>
int rabbit(int n);

int main()
{       
    for(int i=1;i<13;i++)
    {
        printf("%d",rabbit(i));
        
    }
    
    printf("\n");
    
}

int rabbit(int n)
{
    if (n<=2)
        return 1;
    else    
        return rabbit(n-1)+rabbit(n-2);
}