#include <stdio.h>

int main()
{
    int arr[9]={};
    int num,result;
    scanf("%d",&num);

    for(int i=1;i<10;i++)
    {
        //result = i * num ;
        arr[i-1] = i*num;
    
    }

    for(int i=0;i<9;i++)
    {
        printf("%d * %d = %d\n",num, i+1, arr[i]);
    }
    

}