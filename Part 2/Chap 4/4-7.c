// 4-7.c 
#include <stdio.h>
int main(void)
{
		int array[3]={10, 20, 30};
		int* p=NULL;
		
		p=array;		// p=&array[0]; 포인터 변수에 배열의 시작 주소를 저장
		
		printf("%d %d %d \n", array[0], array[1], array[2]);
		printf("%d %d %d \n", *(array+0), *(array+1), *(array+2));
		printf("%d %d %d \n", p[0], p[1], p[2]);
		printf("%d %d %d \n", *(p+0), *(p+1), *(p+2));
		
		printf("배열의 크기 : %d 포인터의 크기 : %d \n", sizeof(array), sizeof(p));
		
		return 0;
}

