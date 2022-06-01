/* 4-2.c 
#include <stdio.h>
int main(void)
{
		int array[3]={10, 20, 30};
		
		// * 연산자를 붙임
		printf("%d %d %d \n", *array, * (array+0), *&array[0]);	// 배열의 0번 요소에 저장된 값
		printf("%d %d \n", *(array+1), *&array[1]);	// 배열의 1번 요소에 저장된 값
		printf("%d %d \n", *(array+2), *&array[2]);	// 배열의 2번 요소에 저장된 값
		
		printf("%d %d %d \n", sizeof(*array), sizeof(*(array+0)), sizeof(*&array[0]));
		
		return 0;
}
*/