// 4-1.c 
#include <stdio.h>
int main(void)
{
		int array[3]={10, 20, 30};
		
		printf("%x %x %x \n", array, array+0, &array[0]);	// 배열의 0번 요소의 주소
		printf("%x %x \n", array+1, &array[1]);	// 배열의 1번 요소의 주소
		printf("%x %x \n", array+2, &array[2]);	// 배열의 2번 요소의 주소
		
		printf("%d %d %d \n", sizeof(array), sizeof(array+0), sizeof(&array[0]));
		
		return 0;
}
