// 2-8.c  
#include<stdio.h>
int main(void)
{
	int array[2][2] = {10,20,30,40};

	printf("%x %x\n", array[0],&array[0][0]);  // 0青狼 措钎 林家, 0青 0凯狼 林家 
	printf("%x %x\n", array[1],&array[1][0]);  // 1青狼 措钎 林家, 1青 0凯狼 林家  
	
	return 0;
}