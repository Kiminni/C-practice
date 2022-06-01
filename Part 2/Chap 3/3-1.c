/* 3-1.c
#include <stdio.h>
int main( )
{
		int num1=3;
		char num2='A';		// 문자 A는 ASCII 값 65
			
		printf("주소 : %x, 값 : %d, 값 : %d \n", &num1, num1, *&num1);
		printf("주소 : %x, 값 : %d, 값 : %d \n", &num2, num2, *&num2);
			
		printf("%d %d \n", sizeof(int), sizeof(char));
		printf("%d %d \n", sizeof(num1), sizeof(num2));
			
		return 0;
}  */

