//4-33.c 
// ① 포인터 변수에 다른 메모리 공간의 주소를 저장하지 못하게 한다.
#include <stdio.h>
int main(void)
{
		char a='A';
		char b='B';
	
		char * const p=&a;	// p=&a 상수화
		
		*p='C';
		printf("%c \n", *p);
		printf("%c \n", a);
	
		//p=&b;				// 에러
		
		return 0;
}
