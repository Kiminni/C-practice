// 1-9.c 
#include<stdio.h>
int main(void)
{
	int array[3] = {1,2,3};

   	printf("%x %x %x \n",array+0,array+1,array+2);					  // 16진수 주소출력, 4 byte 차이
    printf("%d %d %d \n",*(array+0),*(array+1),*(array+2));     // 10진수   값출력
	printf("%d %d \n", *(array+0), *array);									  // 같은 표현 

   	return 0;
} 