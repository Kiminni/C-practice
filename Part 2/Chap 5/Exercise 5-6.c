#include <stdio.h>
void* add(int a, int b);
void* sub(int a, int b);
void* mul(int a, int b);
void* div(int a, int b);



int main()
{   
    int num1, num2;

    scanf("%d",&num1);
    scanf("%d",&num2);

    *(int *)add(num1, num2);
    
    return 0;
}


void* add(int a, int b)
{
    printf("%d",a+b);
}
void* sub(int a, int b)
{

}
void* mul(int a, int b)
{

}
void* div(int a, int b)
{

}