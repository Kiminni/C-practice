// 4-27.c 
#include <stdio.h>
int main(void)
{
		char array1[ ]={'A', 'B', 'C', 'D', '\0'};	// 문자열 배열 선언
		char array2[ ]={'A', 'B', 'C', 'D'};			// 문자 배열 선언
		
		// 문자열 출력
		printf("%s\n", array1);
		printf("%s\n", array2);
		
		return 0;
}
