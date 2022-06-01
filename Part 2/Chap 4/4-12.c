// 4-12.c 
#include <stdio.h>
int main(void)
{
		int array[3][3]={10,20,30,40,50,60,70,80,90};
		
		printf("%x %x %x \n", &array[0][0], &array[0][1], &array[0][2]);	// 주소 출력
		printf("%x %x %x \n", &array[1][0], &array[1][1], &array[1][2]);	// 주소 출력
		printf("%x %x %x \n", &array[2][0], &array[2][1], &array[2][2]);	// 주소 출력
		printf("---------------\n");
		
		printf("%d %d %d \n", *&array[0][0], *&array[0][1], *&array[0][2]);	// 값 출력
		printf("%d %d %d \n", *&array[1][0], *&array[1][1], *&array[1][2]);	// 값 출력
		printf("%d %d %d \n", *&array[2][0], *&array[2][1], *&array[2][2]);	// 값 출력
		printf("---------------\n");
		
		printf("%d %d %d \n", array[0][0], array[0][1], array[0][2]);	// *& 서로 상쇄
		printf("%d %d %d \n", array[1][0], array[1][1], array[1][2]);	// *& 서로 상쇄
		printf("%d %d %d \n", array[2][0], array[2][1], array[2][2]);	// *& 서로 상쇄
		
		return 0;
}
