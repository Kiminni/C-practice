#include <stdio.h>

int main(void)
{
    int x,y,z;
 
    printf("input x:"); //4
    scanf("%d",&x);
    
    printf("input y:"); //5
    scanf("%d",&y);

    printf("input z:"); //2
    scanf("%d",&z);

    printf("Answer: %d",(x+y)*(x+z)/(y%z));

}