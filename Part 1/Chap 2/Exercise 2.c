#include <Stdio.h>

int main(void)
{
    /*printf("%d * %d = %d\n",2,1,2);
    printf("%d * %d = %d\n",2,2,4);
    printf("%d * %d = %d\n",2,3,6);
    printf("%d * %d = %d\n",2,4,8);
    printf("%d * %d = %d\n",2,5,10);
    printf("%d * %d = %d\n",2,6,12);
    printf("%d * %d = %d\n",2,7,14);
    printf("%d * %d = %d\n",2,8,16);
    printf("%d * %d = %d\n",2,9,18);*/

    int i;

    for(i=1;i<=9;i++)
    {
        printf("2 * %d = %d\n", i, 2*i); //i 선언 후 i가 증가하면서 곱한 값을 출력
    }




}