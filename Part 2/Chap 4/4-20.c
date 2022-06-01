// 4-20.c 
#include <stdio.h>
int main(void)
{
		int a=10, b=20, c=30;
		int* ap[3]={NULL, NULL, NULL};	//포인터 배열
		
		ap[0]=&a;
		ap[1]=&b;
		ap[2]=&c;
		
		printf("%x %x %x \n", &a, &b, &c);
		printf("%x %x %x \n", ap[0], ap[1], ap[2]);	// ap[0] == *(ap+0)
		printf("%x %x %x \n", *(ap+0), *(ap+1), *(ap+2));	// ap[1] == *(ap+1)
		printf("--------------\n");
		
		printf("%d %d %d \n", *&a, *&b, *&c);
		printf("%d %d %d \n", *ap[0], *ap[1], *ap[2] );	// ap[0] == *(ap+0)
		printf("%d %d %d \n", **(ap+0), **(ap+1), **(ap+2) );	// ap[1] == *(ap+1)
		
		return 0;
} 