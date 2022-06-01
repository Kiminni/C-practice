 /* 4-5.c 
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
		int* p1=( int*) calloc(1, sizeof(int));
		int* p2=(int*) malloc(4);
		
		printf("p1 °ª : %d \n", *p1);
		printf("p2 °ª : %d \n", *p2);
		
		free(p1);
		p1=NULL;
	
		free(p2);
		p2=NULL;
 	
		return 0;
}*/
