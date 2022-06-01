// 4-25.c
#include <stdio.h>
int main(void)
{
		char array[ ]={'A', 'B', 'C', 'D', '\0'};		// 문자열 배열 선언
		
		// 문자 출력
		printf("%c %c %c %c %c \n", array[0], array[1], array[2], array[3], array[4]);
		printf("%d %d %d %d %d \n", array[0], array[1], array[2], array[3], array[4]);
		
		return 0;
} 

