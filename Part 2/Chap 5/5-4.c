/* 5-4.c
#include <stdio.h>
	
void func(int(*p)[4], int num1, int num2);			// 함수의 선언, 배열 포인터 변수
	
int main(void)
{
		int array[2][4]={10,20,30,40,50,60,70,80};
		func(array, sizeof(array)/16, sizeof(array)/8);	// 함수의 호출
		return 0;
}
	
void func(int(*p)[4], int num1, int num2)			// 함수의 정의
{
		int i, j;
		for(i=0; i<num1; i++)
		{
			for(j=0; j<num2; j++)
			{
				printf("%d ", p[i][j]);
			}
			printf("\n");
		}
} */
