//3-7.c 
#include <stdio.h>
int main( )
{
		char c1='A';
		char* cp=NULL;
		char** cpp=NULL;
		
		cp=&c1;
		cpp=&cp;
		
		printf("%c %x %x \n", c1, cp, cpp);		// 각 변수에 저장된 데이터 출력
		printf("%x %x %x \n", &c1, &cp, &cpp);	// 각 변수의 주소 출력
		printf("%c %c %c \n", c1, *cp,**cpp);	// 문자 A 출력
				
		return 0;
}
