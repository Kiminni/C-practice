// 4-9.c 
#include <stdio.h>
#include <stdlib.h>

int* allocate(int num, ...);
	
int main(void)
{
		int a=4, b=8;
		int* p1=NULL;
			
		p1=allocate(1, a);
		p1[0]=10;
		printf("4바이트 힙 영역에 저장된 값 : %d \n", p1[0]);
			
		//free(p1);
		p1=NULL;

		return 0;
	}
		
int* allocate(int num, ...)
{
		int* p=&num+1;
		static int* heap1=NULL;
			
		if(num==1)
		{
			heap1=(int*) malloc(p[0]);
			return heap1;
			}
		else
			{
				printf("인자의 개수는 1개 이하입니다. \n");
				return NULL;
			}
}

