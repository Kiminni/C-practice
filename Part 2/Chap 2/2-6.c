// 2-6.c 
#include<stdio.h>
int main(void)
{
	int array[2][3]={1,2,3,4,5,6};
	printf("%x %x %x \n", &array[0][0],&array[0][1],&array[0][2]);
	printf("%x %x %x \n", &array[1][0],&array[1][1],&array[1][2]);

	return 0;
}