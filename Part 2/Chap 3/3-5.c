/* 3-5.c 
#include <stdio.h>
int main( )
{
		int num=10;
		int* ip=NULL;		// 포인터 변수 선언
			
		ip=&num;			// 주소 저장
			
		printf("%x %x %d\n", &*&ip, *&ip, **&ip);
		printf("%x %x %d\n", &ip, ip, *ip);
			
		return 0;
}
*/