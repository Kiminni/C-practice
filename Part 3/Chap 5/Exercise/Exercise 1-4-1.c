#include <stdio.h>
#include "Exercise 1-4-3.h"
int main()
{
    Point point1;
    int result1, result2;

    scanf("%d %d",&point1.x,&point1.y);

    result1 = add(point1.x,point1.y);
    result2 = subtract(point1.x,point1.y);

    printf("%d %d\n",result1,result2);

    return 0;
    
}