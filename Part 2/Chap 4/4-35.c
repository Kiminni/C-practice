/* 4-35.c 
// ③ 포인터 변수를 통해 메모리 공간의 주소와 값 모두 변경하지 못하게 한다.
#include <stdio.h>
int main(void)
{
		char a='A';
		char b='B';
		const char* const p=&a;
		
		printf("%c \n", *p);
		printf("%c \n", a);
		
		a='X';
		b='C';
		
		printf("%c \n", a);
		printf("%c \n", b);
		
		p=&b;		// 에러
		*p='D';		// 에러
		
		return 0;
}
*/