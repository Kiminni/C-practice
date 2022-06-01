#include <stdio.h>

int main()
{
    int len, i,max;
    
    scanf("%d",&len);
    
    int arr[len];
    for(i = 0; i<len; i++)
        scanf("%d",&arr[i]);

    max = arr[0]+arr[1]+arr[2];

    for(i = 0; i<len-2; i++)
    {
        if (max<arr[i]+arr[i+1]+arr[i+2])
        {
            printf("%d",i);            
        }
        else 
            return max;
    }
    
    printf("%d",max);
    return 0;
}