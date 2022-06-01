// 4-5.c 
#include <stdio.h>
int main(void)
{
		int array[3]={10, 20, 30};
		int* p=NULL;
		p=array;		// p=&array[0];  포인터 변수에 배열의 시작 주소를 저장
		
		// * 연산자를 붙임
		printf("%d %d %d \n", *p, *(p+0), *&p[0]);	// 배열의 0번 요소에 저장된 값
		printf("%d %d \n", *(p+1), *&p[1]);				// 배열의 1번 요소에 저장된 값
		printf("%d %d \n", *(p+2), *&p[2]);				// 배열의 2번 요소에 저장된 값
		
		return 0;
}
