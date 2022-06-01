#include <stdio.h>
int getArea(int x, int y);

int main()
{
    int width, length,result = 0;
    scanf("%d %d",&width, &length);
    result = getArea(width,length);   
    printf("%d",result);
}

int getArea(int x, int y)
{
    return x*y;
}