// 4-34.c 
// ② 포인터 변수를 통해 메모리 공간의 값을 변경하지 못하게 한다.
#include <stdio.h>
int main(void)
{
		char a='A';
		char b='B';
		const char* p=&a;	// *p를 상수화
		
		printf("%c \n", *p);
		printf("%c \n", a);
		
		p=&b;
		printf("%c \n", *p);
		printf("%c \n", b);
		
		a='X';
		b='C';
		//*p='D';				// 에러
		
		return 0;
}
