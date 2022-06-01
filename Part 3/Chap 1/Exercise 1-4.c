#include <stdio.h>

struct point
{
    int x;
    int y;
};

int main()
{
    struct point s1;
    struct point* sp = NULL;
    
    sp = &s1;

    s1.x = 10;
    s1.y = 10;

    printf("%d %d\n",s1.x,s1.y);
    printf("%d %d\n",(*sp).x,(*sp).y);
    printf("%d %d\n",sp->x ,sp->y);

}