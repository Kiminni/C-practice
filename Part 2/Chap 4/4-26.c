// 4-26.c 
#include <stdio.h>
int main(void)
{
		char array[ ]="ABCD";	// 문자열 배열 선언
		
		// 문자열 출력
		printf("%s\n", array);
		printf("%s\n", array+1);
		printf("%s\n", array+2);
		printf("%s\n", array+3);
		
		return 0;
}
