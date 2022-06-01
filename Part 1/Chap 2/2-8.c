//2-8.c 
#include <stdio.h>
int main(void)
{
	printf("%d \n", 2147483647); // 2147483647 
	printf("%d \n", 2147483650); // -2147483646 -> 쓰레기값
	printf("%u \n", 4294967295); // 2147483647의 약 2배

	return 0;
}
