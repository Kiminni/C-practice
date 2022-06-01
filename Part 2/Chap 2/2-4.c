/* 2-4.c 
#include<stdio.h>
int main(void)
{
	 // 2차원 배열의 선언
	int array[2][2];   
 	int i,j;
	
	// 2차원 배열에 데이터 입력 	
	for(i=0;i<2;i++)
	{
		for(j=0; j<2; j++)
		{
			printf("정수를 입력하세요: ");
			scanf("%d",&array[i][j]);
		}
	}

	//2차원 배열에 데이터 출력 	
	for(i=0;i<2;i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%3d",array[i][j]);
		}
	    printf("\n");
	}
	
	return 0;
}
*/ 