// 2-1.c 
#include<stdio.h>
int main(void)
{
	// 2차원 배열의 선언 
	int array[4][3];  // 4행 3열의 배열 길이 선언 
	
	array[0][0]=1;  array[0][1]=2;  array[0][2]=3;		// 0행의 배열 요소들에 데이터 저장
	array[1][0]=4;  array[1][1]=5;  array[1][2]=6;		// 1행의 배열 요소들에 데이터 저장
	array[2][0]=7;  array[2][1]=8;  array[2][2]=9;		// 2행의 배열 요소들에 데이터 저장
	array[3][0]=10; array[3][1]=11; array[3][2]=12;	// 3행의 배열 요소들에 데이터 저장

	printf("%d %d %d \n",array[0][0], array[0][1], array[0][2]);		// 0행 출력 
	printf("%d %d %d \n",array[1][0], array[1][1], array[1][2]);		// 1행 출력 
	printf("%d %d %d \n",array[2][0], array[2][1], array[2][2]);		// 2행 출력 
	printf("%d %d %d \n",array[3][0], array[3][1], array[3][2]);		// 3행 출력 
	
	return 0;
}
