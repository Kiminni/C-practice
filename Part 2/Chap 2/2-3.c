/* 2-3.c 
#include<stdio.h>
int main(void)
{
	//  행 단위로 2차원 배열의 선언 과 동시 데이터 저장(초기화)  
	int array1[4][3]={{1,2},{3},{4},{5}};  
	int array2[4][3]={{1,2,3},{4,5,6},{7,8,9},{10}};  

	// 2차원 배열 array1의 데이터 출력 
	printf("%d %d %d \n",array1[0][0], array1[0][1], array1[0][2]); // 0행 출력 
	printf("%d %d %d \n",array1[1][0], array1[1][1], array1[1][2]); // 1행 출력 
	printf("%d %d %d \n",array1[2][0], array1[2][1], array1[2][2]); // 2행 출력 
	printf("%d %d %d \n",array1[3][0], array1[3][1], array1[3][2]); // 3행 출력 

	printf("--------------------\n");

	// 2차원 배열 array2의 데이터 출력 
	printf("%d %d %d \n",array2[0][0], array2[0][1], array2[0][2]); // 0행 출력 
	printf("%d %d %d \n",array2[1][0], array2[1][1], array2[1][2]); // 1행 출력 
	printf("%d %d %d \n",array2[2][0], array2[2][1], array2[2][2]); // 2행 출력 
	printf("%d %d %d \n",array2[3][0], array2[3][1], array2[3][2]); // 3행 출력 
	
	return 0;
}
*/