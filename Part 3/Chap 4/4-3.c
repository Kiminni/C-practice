// 4-3.c 
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char* p1 = (char*)malloc(2);
	int*  p2 = (int*)malloc(8);
	
	p1[0] = 'A';    //  *(p1+0) = 'A';
	p1[1] = 'B';    //  *(p1+1) = 'B';

	p2[0] = 10;		//  *(p2+0) = 10;
	p2[1] = 20;     //  *(p2+1) = 20;

	printf("??: %x %x %x %x \n", &p1[0], &p1[1], &p2[0], &p2[1]);
	printf("?: %d %c %c %d %d \n",sizeof(p1),  p1[0],  p1[1],  p2[0],  p2[1]);

	free(p1);
	p1 = NULL;

	free(p2);
	p2 = NULL;

	return 0;
}