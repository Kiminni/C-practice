// 1-4.c
#include<stdio.h>
int main(void)
{
	int array[3]={87,65,78};
	int i, total=0;

    for(i=0; i<3; i++)
	{
		total = total + array[i];
		printf("배열의 요소 array[%d]의 값: %d \n", i, array[i]); 

	}
	
	printf("총점은 %d 이고 ", total);
	printf("평균은 %.2lf 입니다\n", (double)total/3);

	return 0;
}  