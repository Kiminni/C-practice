#include <stdio.h>



struct point
{
    int x;
    int y;
};

void func1(struct point s1);
void func2(struct point *s2);

void main(void)
{
    struct point p1 = {10,20};
    struct point p2 = {20,20};

    func1(p1);
    func2(&p2);

    return 0;

}

void func1(struct point s1)
{
    printf("%d %d \n",s1.x,s1.y);
}
void func2(struct point *s2)
{
    printf("%d %d \n",s2 -> x, s2 -> y);
}