// 3-8.c
#include <stdio.h>
int main( )
{
		int num1=10;
		int* ip=NULL;			// 1차원 포인터 변수 선언
		int** ipp=NULL;		// 2차원 포인터 변수 선언
		
		ip=&num1;
		ipp=&ip;
		
		printf("%d %x %x \n", num1, ip, ipp);			// 각 변수에 저장된 데이터 출력
		printf("%x %x %x \n", &num1, &ip, &ipp);		// 각 변수의 주소 출력
		printf("%d %x %x \n", *&num1, *&ip, *&ipp);	// *&은 서로 상쇄
		
		printf("%d %d %d \n", num1, *ip, **ipp);		// 10 출력
		printf("%x %x %x \n", &num1, ip, *ipp);		// 변수 num1의 주소(&num1) 출력
		
		return 0;
}
 