#include <stdio.h>

int sum(int n);

int main()
{
    int result = 0,num;
    scanf("%d",&num);
    result = sum(num);
    printf("%d",result);
}

int sum(int n)
{
    if(n>0)
        return n+sum(n-1);
    else
        return 0;
}