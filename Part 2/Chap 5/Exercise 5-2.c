#include <stdio.h>

void func(int *a, int *b);
//void func(int* a, int (*b[2])
int main()
{
    int array[4] = {10,20,30,40};
    int array2[2][2] = {50,60,70,80};

    func(array,array2);
    return 0;
}

void func(int* a, int *b)
//void func(int* a, int (*b[2])
{
    int i,j,k;
    for(i = 0 ; i < 4; i++)
        printf("%d ",a[i]);
    
    printf("\n");

  /*  for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d ",b[j][k]);
            }
        }
    printf("\n");
    */

for(j = 0; j<4; j++)
{
    printf("%d ",b[j]);
}

}