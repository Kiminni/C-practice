#include <stdio.h>
int plus(int i, int j);
int minus(int i, int j);
int multiply(int i, int j);
float divide(int i, int j);

int main()
{
    int a,b;
    int result;
    double result2;

    scanf("%d %d",&a, &b);
    
    result = plus(a,b);
    printf("%d\n",result);
    
    result = minus(a,b);
    printf("%d\n",result);
    
    result = multiply(a,b);
    printf("%d\n",result);
    
    result2 = divide(a,b);
    printf("%lf\n",result2);

    return 0;
}

int plus(int i, int j)
{   
    return i+j;
}

int minus(int i, int j)
{   
    return i-j;
}
int multiply(int i, int j)
{   
    return i*j;
}
float divide(int i, int j)
{   
    return (double) i/j;
}