// 1-5.c
#include<stdio.h>
int main(void)
{
	int array1[3] = {1,2,3};
	char array2[3] = {'A','B','C'};

	printf("%x %x %x \n",&array1[0],&array1[1],&array1[2]);    //16진수 주소출력, 4 byte 차이
	printf("%x %x %x \n",&array2[0],&array2[1],&array2[2]);    //16진수 주소출력, 1 byte 차이

   	return 0;
}  