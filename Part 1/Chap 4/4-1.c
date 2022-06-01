// 4-1.c 
#include<stdio.h>
int main(void)
{
	printf("%d %x %o\n", 0x11,0x11,0x11);
	printf("%d %x %o\n", 021,021,021);
	printf("%d %x %o\n", 17,17,17);

	printf("10진수 정수형 상수 %d + %d = %d 입니다.\n",10, 20, 10+20);
	printf("16진수 정수형 상수 %x + %x = %x 입니다.\n",0x10, 0x20, 0x10+0x20);
	printf("8진수 정수형 상수 %o + %o = %o 입니다.\n",010, 020, 010+020);

	return 0;
}