#include <stdio.h>
#define pi 3.141592

int main(void)
{
    double radius;
    double speed;
    double result;

    scanf("%lf %lf",&radius, &speed);
    
    result = (2 * radius * pi) / speed ; //시간 = 거리 / 속도
    printf("%.3lf",result); //소수점 3자리
    
    return 0;

}