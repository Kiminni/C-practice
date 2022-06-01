// 2-10.c
#include<stdio.h>
int main(void)
{
	int array[2][2] = {10,20,30,40};

	printf("%x %x \n", &array[0][0],&array[0][1]); 
	printf("%x %x \n", &array[1][0],&array[1][1]);  

	printf("-------------------\n");
	printf("%x %x \n", array[0]+0, array[0]+1);
	printf("%x %x \n", array[1]+0, array[1]+1);

	printf("-------------------\n");
	printf("%x %x \n", *(array+0)+0, *(array+0)+1);
	printf("%x %x \n", *(array+1)+0, *(array+1)+1); 

	return 0;
} 
