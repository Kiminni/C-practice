/* 4-17.c 
#include <stdio.h>
int main(void)
{
		int array[2][3]={10,20,30,40,50,60};
		int (*p)[3];	// 배열 포인터 변수 p 선언
		
		p=array;		// p=&array[0];  포인터 변수에 배열의 시작 주소를 저장
		printf("%x %x %x \n", &array[0][0], &array[0][1], &array[0][2]);	// 주소 출력
		printf("%x %x %x \n", &array[1][0], &array[1][1], &array[1][2]);	// 주소 출력
		
		printf("------------\n");
		printf("%x %x %x \n", &p[0][0], &p[0][1], &p[0][2]);	// 주소 출력
		printf("%x %x %x \n", &p[1][0], &p[1][1], &p[1][2]);	// 주소 출력
		
		printf("------------\n");
		printf("%d %d %d \n", *&array[0][0], *&array[0][1], *&array[0][2]);	// 값 출력
		printf("%d %d %d \n", *&array[1][0], *&array[1][1], *&array[1][2]);	// 값 출력
		
		printf("------------\n");
		printf("%d %d %d \n", *&p[0][0], *&p[0][1], *&p[0][2]);	// 값 출력
		printf("%d %d %d \n", *&p[1][0], *&p[1][1], *&p[1][2]);	// 값 출력
			
		printf("------------\n");
		printf("%d %d %d \n", array[0][0], array[0][1], array[0][2]);	// *& 서로 상쇄, 값 출력
		printf("%d %d %d \n", array[1][0], array[1][1], array[1][2]);	// *& 서로 상쇄, 값 출력
			
		printf("------------\n");
		printf("%d %d %d \n", p[0][0], p[0][1], p[0][2]);	// *& 서로 상쇄, 값 출력
		printf("%d %d %d \n", p[1][0], p[1][1], p[1][2]);	// *& 서로 상쇄, 값 출력
			
		return 0;
}
*/