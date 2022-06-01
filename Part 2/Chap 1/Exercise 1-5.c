#include <stdio.h>

int main(void)
{
    double arr[5] = {2.2,3.5,2.5,10.1,4.0};
    double arr2[5] = {3.3,2.0,4.0,1.0,2.5};
    double result;
    for(int i = 0; i < 5; i++)
    {
        result = arr[i] * arr2[i];
        printf("%.2lf ",result); 
    }


}