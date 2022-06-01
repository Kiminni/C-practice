#include <stdio.h>

int main(void)
{
    int num,divider = 100,temp;
    scanf("%d",&num);

   /* h = num/100;
    t = (num%100)/10;
    o = num%100%10;

    if (h%2==0)
        printf("%d: 짝수 ",h);
    else
        printf("%d: 홀수 ",h);    
    if (t%2==0)
        printf("%d: 짝수 ",t);
    else
        printf("%d: 홀수 ",t);   
    if (o%2==0)
        printf("%d: 짝수 ",o);
    else
        printf("%d: 홀수 ",o);   

    */

   while(divider > 0)
   {
        temp = num/divider % 10;
      
        if (temp % 2)
            printf("%d:홀수 ",temp);
        else
            printf("%d:짝수 ",temp);

        

        divider = divider / 10;

        
   }







    return 0;
}   