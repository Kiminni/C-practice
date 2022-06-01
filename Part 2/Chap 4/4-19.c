/* 4-19.c 
#include <stdio.h>
int main(void)
{
		int a=10, b=20, c=30;
		int* ap=NULL;
		int* bp=NULL;
		int* cp=NULL;
		
		ap=&a;
		bp=&b;
		cp=&c;
		
		printf("%d %d %d \n", a, b, c);	// 10, 20, 30 출력
		printf("%d %d %d \n", *ap, *bp, *cp);	// 10, 20, 30 출력
		
		printf("%x %x %x \n", &a, &b, &c);	// 변수 a, b, c의 주소 출력
		printf("%x %x %x \n", ap, bp, cp);	// 포인터 변수 ap, bp, cp에 저장된 주소 출력
		printf("%x %x %x \n", &ap, &bp, &cp);	// 포인터 변수 ap, bp, cp의 주소 출력
		
		return 0;
}
*/