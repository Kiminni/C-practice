#include <stdio.h>
int square(int n);
int cube(int n);
int quartic(int n);
int quintic(int n);
void print();

int main()
{
    print();
    for(int i=1;i<4;i++)
        printf("%d    %d    %d    %d    %d\n",i,square(i),cube(i),quartic(i),quintic(i));
    printf("------------------------------------\n");
    return 0;

}
int square(int n)
{
    return n*n;
}

int cube(int n)
{
    return n*square(n);
}
int quartic(int n)
{
    return n*cube(n);
}

int quintic(int n)
{
    return n*quartic(n);
}

void print()
{
    printf("A table of Powers\n");
    printf("------------------------------------\n");
    printf("int  squ  cub  qua   qui\n");    
}
