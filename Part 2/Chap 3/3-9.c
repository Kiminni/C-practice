// 3-9.c 
#include <stdio.h>
int main( )
{
		int num1=10;
		int* ip1=NULL;			// 1차원 포인터 변수 선언
		int** ip2=NULL;		// 2차원 포인터 변수 선언
		int*** ip3=NULL;		// 3차원 포인터 변수 선언
			
		ip1=&num1;
		ip2=&ip1;
		ip3=&ip2;
			
		printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);	// 모두 10 출력
		printf("%x %x %x %x \n", &num1, ip1, *ip2, **ip3);		// 모두 num1의 주소(&num1) 출력
		printf("%x %x %x \n", &ip1, ip2, *ip3);								// 모두 ip1의 주소(&ip1) 출력
		printf("%x %x \n", &ip2, ip3);											// 모두 ip2의 주소(&ip2) 출력
			
		printf("%d %d \n", sizeof(int), sizeof(int*));						// 모두 4바이트 크기 출력
		printf("%d %d\n", sizeof(int**), sizeof(int***));					// 모두 4바이트 크기 출력
			
		printf("%d %d \n", sizeof(num1), sizeof(ip1));				// 모두 4바이트 크기 출력
		printf("%d %d\n", sizeof(ip2), sizeof(ip3));						// 모두 4바이트 크기 출력
			
		return 0;
}

