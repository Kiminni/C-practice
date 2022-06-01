#include <stdio.h>
int abs(int num);

int main()
{   
    int result = 0;
    int n;
    scanf("%d",&n);
    result = abs(n);
    printf("%d",result);

}

int abs(int num)
{   
    if (num>0)
        return num;
    else 
        return -num;
}