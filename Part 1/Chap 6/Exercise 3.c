#include <stdio.h>


int main(void)
{
    int i;
    float f;
    double d;

    i = (long)('a'+1.3); // i = int -> long //데이터 손실 o
    f = 2.49+i; //float + int -> float -> double(정수 - int / 실수 -> double) 데이터 손실 x
    d = (double)f * i; // 데이터 손실 x

    printf("%d %lf %lf",i,f,d);
    
}
