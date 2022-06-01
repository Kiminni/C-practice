#include <stdio.h>

int main()
{
    int num1 = 10;
    int* ip1 = NULL;
    int** ip2 = NULL;
    int*** ip3 = NULL;
    
    //1단계
    ip1 = &num1;
    *ip1 = 20;
    printf("%d %d\n",num1,*ip1);

    //2단계
    ip2 = &ip1;
    **ip2 = 30;
    printf("%d %d\n",num1,**ip2);


    //2단계
    ip3 = &ip2;
    ***ip3 = 40;
    printf("%d %d\n",num1,***ip3);
    
}