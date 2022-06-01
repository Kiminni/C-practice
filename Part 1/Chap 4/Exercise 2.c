#include <stdio.h>

#define Age1 25 //age를 define문을 이용해 선언
#define Age2 23

int main()
{
    /* 리터럴 상수로 출력
    printf("This year is %d.\n",2022);
    printf("My age is %d.\n",25);
    printf("I'm born in %d, now is %dth year.\n",1998,25);
    printf("My sister's age is %d.\n",23);
    printf("My sister is born in %d, now is %dth year.\n",2000,23);
    */ 
    const int birthyear1 = 1998; //정수형 birthday를 const문을 이용해 선언
    const int birthyear2 = 2000; 
    const int thisyear = 2022;

    printf("This year is %d.\n",thisyear);
    printf("My age is %d.\n",Age1);
    printf("I'm born in %d, now is %dth year.\n",birthyear1,Age1);
    printf("My sister's age is %d.\n",Age2);
    printf("My sister is born in %d, now is %dth year.\n",birthyear2,Age2);    
}