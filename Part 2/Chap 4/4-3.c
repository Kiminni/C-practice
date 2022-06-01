/* 4-3.c 
#include <stdio.h>
int main(void)
{
		int array[3]={10, 20, 30};
		
		// * 연산자를 붙임
		printf("%d %d %d \n", *(array+0), *&array[0], array[0]);	// 배열의 0번 요소에 저장된 값
		printf("%d %d %d \n", *(array+1), *&array[1], array[1]);	// 배열의 1번 요소에 저장된 값
		printf("%d %d %d \n", *(array+2), *&array[2], array[2]);	// 배열의 1번 요소에 저장된 값
		// 결론: *(array + i) == *&array[i] == array[i]는 값을 나타내는 같은 표현
		
		return 0;
}
*/
