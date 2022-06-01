/* 4-15.c
#include <stdio.h>
int main(void)
{
		int array[2][3]={10,20,30,40,50,60};
		int* p=NULL;		// int** p;

		p=array;	// p=&array[0][0];  // p=array[0]; 포인터 변수에 배열의 시작 주소를 저장
		
		printf("%d %d %d \n", p[0][0], p[0][1], p[0][2]);	// 에러
		printf("%d %d %d \n", p[1][0], p[1][1], p[1][2]);	// 에러
		
		return 0;
}
 */