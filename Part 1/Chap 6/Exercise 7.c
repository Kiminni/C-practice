#include <stdio.h>

int main()

{
    double r,result1,result2;

    scanf("%lf",&r);
    result1 = 2*3.14*r;
    result2 = r*r*3.14;

    printf("%.2lf %.2lf",result1,result2);


    return 0;

}