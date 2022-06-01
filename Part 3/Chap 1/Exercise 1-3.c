#include <stdio.h>

struct point
{
    int x;
    int y;
};

int main()
{
    struct point p;
    p.x = 3;
    p.y = 4;
    printf("%d %d\n,p.x, p.y");
    printf("%x %x %x\n",&p,&p.x,&p.y);
}