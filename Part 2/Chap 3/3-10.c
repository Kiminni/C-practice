// 3-10.c 
#include <stdio.h>
int main( )
{
		int num1=10;
		int* ip1=NULL;			// 1차원 포인터 변수 선언
		int** ip2=NULL;			// 2차원 포인터 변수 선언
		int*** ip3=NULL;		// 3차원 포인터 변수 선언
		
		ip1=&num1;
		ip2=&ip1;
		ip3=&ip2;
		
		printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);	// 모두 10 출력
		
		*ip1=20;
		printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);	// 모두 20 출력
		
		**ip2=30;
		printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);	// 모두 30 출력
		
		***ip3=40;
		printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);	// 모두 40 출력
		
		return 0;
}
