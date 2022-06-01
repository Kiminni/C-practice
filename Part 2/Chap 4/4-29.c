// 4-29.c 
#include <stdio.h>
int main(void)
{
		char* p="ABCD";		// 문자열 상수 ABCD의 시작 주소를 p에 저장

		printf("%s\n", p);
		printf("%s\n", p+1);
		printf("%s\n", p+2);
		printf("%s\n", p+3);	
		
		return 0;
}
