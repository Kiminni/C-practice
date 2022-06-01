#include <stdio.h>

void main()
{
	int array1[4][3]={0};
	int array2[4][3]={0};
	int result[4][3]={0};
	int i,j,choice=0;

	printf("합과 차중 어떤것을 선택하시겠습니까? (1.합, 2. 차)\n");
	scanf("%d",&choice);

	switch(choice)
	{
	case 1:
		for(i=0; i<4; i++)
		{
			for(j=0; j<3; j++)
			{
				printf("%d행 %d렬에 들어갈 숫자를 입력해주십시오.",i+1,j+1);
				scanf("%d",&array1[i][j]);
			}

		}

		printf("\n");
		printf("2번째 행렬입니다.\n");
		for(i=0; i<4; i++)
		{
			for(j=0; j<3; j++)
			{
				printf("%d행 %d렬에 들어갈 숫자를 입력해주십시오.",i+1,j+1);
				scanf("%d",&array2[i][j]);
			}

		}

		for(i=0; i<4; i++)
		{
			for(j=0; j<3; j++)
			{ 
				result[i][j]=array1[i][j]+array2[i][j];
			}
		}

		printf("결과입니다. \n");
		for(i=0; i<4; i++)
		{
			for(j=0; j<3; j++)
			{ 
				printf("%3d",result[i][j]);
			}
			printf("\n");
		}
		break;

	case 2:

		for(i=0; i<4; i++)
		{
			for(j=0; j<3; j++)
			{
				printf("%d행 %d렬에 들어갈 숫자를 입력해주십시오.",i+1,j+1);
				scanf("%d",&array1[i][j]);
			}

		}

		printf("\n");
		printf("2번째 행렬입니다.\n");
		for(i=0; i<4; i++)
		{
			for(j=0; j<3; j++)
			{
				printf("%d행 %d렬에 들어갈 숫자를 입력해주십시오.",i+1,j+1);
				scanf("%d",&array2[i][j]);
			}

		}

		for(i=0; i<4; i++)
		{
			for(j=0; j<3; j++)
			{ 
				result[i][j]=array1[i][j]-array2[i][j];
			}
		}

		printf("결과입니다. \n");
		for(i=0; i<4; i++)
		{
			for(j=0; j<3; j++)
			{ 
				printf("%5d",result[i][j]);
			}
			printf("\n");
		}
		break;
	default:
		printf("잘못 입력하셨습니다.\n");
		break;
	} 

}

/*

이번 문제는 다양한 방법으로 풀 수 있겠지만,
위의 해답에서는 배열 값들을 미리 정의받지 않고
사용자에게 입력을 받는 방식으로 구현하였습니다.
이전 문제와 같이 배열에 데이터를 기록해두었다가
합인지 차인지에 따라 값을 계산하여
결과로 출력하도록 되어있습니다.

*/