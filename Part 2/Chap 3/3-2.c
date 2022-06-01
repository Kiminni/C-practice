/* 3-2.c 
#include <stdio.h>
int main(void)
{
		// 포인터 변수 선언
		char* cp=NULL;		// char형 주소를 저장하는 포인터 변수 cp
		int* ip=NULL;			// int형 주소를 저장하는 포인터 변수 ip
		
		printf("%x %x %x\n", &cp, cp, *&cp);
		printf("%x %x %x\n", &ip, ip, *&ip);
		
		printf("%d %d \n", sizeof(char*), sizeof(int*));	// 4, 4 출력
		printf("%d %d \n", sizeof(cp), sizeof(ip));			// 4, 4 출력
		
		return 0;
}*/

