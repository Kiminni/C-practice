// 3-6.c 
#include<stdio.h>
int main(void)
{
   int a=0;  
   int b=1;  

   printf("a의 값은 %d 입니다. \n", a); 
   printf("b의 값은 %d 입니다. \n", b); 

   a = a+10;   //  변수(메모리 공간) a의 데이터가 변경 a= 0 -> a=0+10 -> a=10
   b = b+10;   //  변수(메모리 공간) b의 데이터가 변경 b = 1 => b=b+10 -> b = 1+10 -> b =11

   printf("변경된 a의 값은 %d 입니다. \n", a); // 변경된 변수 a의 데이터 출력
   printf("변경된 b의 값은 %d 입니다. \n", b); // 변경된 변수 b의 데이터 출력

   return 0;
}
