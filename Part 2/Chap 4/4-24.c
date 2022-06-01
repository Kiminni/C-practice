// 4-24.c
#include <stdio.h>
int main(void)
{
		char array[ ]="ABCD";	// 문자열 배열 선언
		
		// 문자 출력
		printf("%c %c %c %c %c \n", array[0], array[1], array[2], array[3], array[4]);
		printf("%d %d %d %d %d \n", array[0], array[1], array[2], array[3], array[4]);
		
		// 문자열 크기 출력
		printf("%d \n", sizeof(array));
		
		return 0;
}
 