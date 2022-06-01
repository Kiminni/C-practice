#include <stdio.h>
void arrInput(int a[],int b);

int main()
{
    int a[3] = {10,20,30};
    int* p = NULL;
    int* s = NULL;
    p = &a;
    s = a;
    printf("%d %d\n",sizeof(&a),sizeof(a));
    printf("%d %d %d %d\n",*p,*(p+1),*(p+2),sizeof(p));
    printf("%d %d %d %d\n",*s,*(s+1),*(s+2),sizeof(s));
    return 0;
}
    /*int array[5] = {10,20,30,40,50};
    void (*pfunc) (int [], int);
   
    pfunc = arrInput;
    pfunc(array,5);    
}

void arrInput(int a[],int b)
{
    for(int i=0;i<b;i++)
        printf("%d ",a[i]);
}*/