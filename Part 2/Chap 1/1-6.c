// 1-6.c
#include<stdio.h>
int main(void)
{
	int array[3] = {1,2,3};

	printf("%x %x %x \n",array+0,array+1,array+2);          //16진수 주소출력, 4 byte 차이
	printf("%x %x %x \n",&array[0],&array[1],&array[2]);  //16진수 주소출력, 4 byte 차이

    return 0;
} 