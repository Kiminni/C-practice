#include <stdio.h>
#include "add.h"
//add.h

//int add(int a, int b);

// main.c

int main()
{   int val = 0;
    int val2 = 0;
    int val3 = 0;
    double val4 =0 ;

    val = add(3,4);
    val2 = sub(3,4);
    val3 = mul(3,4);
    val4 = div(3.0,4.0);
    
    printf("%d \n",val);
    printf("%d \n",val2);
    printf("%d \n",val3);
    printf("%lf \n",val4);

    return 0;
}
//add.c
/*
int add(int a, int b)
{
    return a + b;
}
*/