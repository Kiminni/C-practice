// 1-7.c 
#include<stdio.h>
int main(void)
{
    char array[3] = {'A','B','C'};

	printf("%x %x %x \n",array+0,array+1,array+2);        // 16진수 주소출력, 1 byte 차이

    return 0;
}