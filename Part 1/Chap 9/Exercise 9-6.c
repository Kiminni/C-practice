#include <stdio.h>
int add(int x, int y);
int count();
int main()
{
    int result,num1=0,num2=0;
    int full = 0;
    
    
    for(int i=0;i<100;i++)
    {
        scanf("%d",&num1);
        scanf("%d",&num2);
        result = add(num1, num2);
        if ((num1==0) && (num2==0))
            break;
        else
            printf("%d\n",result);
        
        full = count();
    }

    printf("%d\n",full);
}

int add(int x,int y)
{
    return x+y;   
}

int count()
{
    static int num = 0;
    num++;
    return num;
}
