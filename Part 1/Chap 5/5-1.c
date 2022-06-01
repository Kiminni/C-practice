// 5-1.c 
#include<stdio.h>
int main(void)
{
   int a;
   int b;
   	
   a=3;
   b=a+5;
    
   printf("a의 값: %d \n",a);
   printf("b의 값: %d \n",b);

   printf("변수a의 주소: %x \n",&a);
   printf("변수b의 주소: %x \n",&b); 

   return 0;
}