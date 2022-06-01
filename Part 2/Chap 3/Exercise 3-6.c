#include <stdio.h>
void arrInput(int *array, int b);

int main()
{
    int array[5] = {10,20,30,40,50};
    void (*pfunc)(int *, int); 
    pfunc = arrInput;
    pfunc(array,5);

    return 0;

}

void arrInput(int *p, int b)
{
    for(int i = 0; i < 5; i++)
        printf("%d ",p[i]);
    
    


}
