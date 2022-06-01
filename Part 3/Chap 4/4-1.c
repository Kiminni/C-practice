//  4-1.c
#include <stdio.h>
	
	int a=10;						// 전역 변수 a 선언
	
	int main(void)
	{
		int num1=10, num2=20;		// 지역 변수 num1, num2 선언
		static int s=20;				// 정적 변수 s 선언
		
		printf("데이터 출력 : %d %d %d %d \n", a, num1, num2, s);
		printf("코드 영역 : %x %x \n", main, printf);			// 함수 이름
		printf("스택 영역 : %x %x \n", &num1, &num2);		// 지역 변수
		printf("데이터 영역 : %x %x \n", &a, &s);				// 전역 변수, 정적 변수
		
		return 0;	
}
 