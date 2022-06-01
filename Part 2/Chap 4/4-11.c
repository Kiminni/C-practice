/* 4-11.c 
#include <stdio.h>
int main(void)
{
		int array[3];
		int* p=NULL;
		
		p=array;	
		*p=10; 
		printf("%d %d %d \n", p[0], p[1], p[2]);
		printf("--------------\n");
		
		p=p+1;
		*p=20;		// p[0]=20; 
		printf("%d %d %d \n", p[-1], p[0], p[1]);
		printf("--------------\n");
		
		p=p+1;
		*p=30;		// p[0]=30;
		printf("%d %d %d \n", p[-2], p[-1], p[0]);
		printf("--------------\n");
		
		printf("%d %d %d \n", p[-2], p[-1], p[0]);
		printf("%d %d %d \n", *(p-2), *(p-1), *p);
		printf("--------------\n");
		
		return 0;
}
*/