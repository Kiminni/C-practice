#include <stdio.h>

int main()
{
    int x=3,y=5,z=3,k=2;
    int a;
    
    a = x < y|| x < z && z < k;
    printf("%d\n",a);

    a = (x < y|| x < z) && z < k;
    printf("%d\n",a);
}