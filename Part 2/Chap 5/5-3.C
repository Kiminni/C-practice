// 5-3.c 
#include <stdio.h>
	
void func(int* p, int num);				// 함수의 선언, 01 형태
	
int main(void)
{
	int array [ ]={10,20,30,40,50,60,70,80};
	func( array, sizeof(array)/sizeof(int) );		// 함수의 호출
	return 0;
}
	
void func(int* p, int num)						// 함수의 정의
{
		int i;
		for(i=0; i<num; i++)
		{
			printf("%d %d \n", p[i], *(p+i) );		// p[i] == *(p+i)
		}
}
