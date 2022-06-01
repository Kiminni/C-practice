/* 4-6.c 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
		int i=0;
		
		int* p=(int*) malloc(sizeof(int)*2);	// 8바이트 동적 메모리 할당
		p[0]=10;
		p[1]=20;
		
		p=(int*) realloc(p, sizeof(int)*4);		// 16바이트 재할당(이전보다 8Byte만큼 확장됨)
		p[2]=30;
		p[3]=40;
		
		for(i=0; i<4; i++)
			printf("p[%d] : %d \n", i, p[i]);
			
		free(p);
		p=NULL;
		
		return 0;
}*/

