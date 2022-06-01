/* 3-4.c 

#include <stdio.h>
int main( )
{
		int a=0, b=0, c=0;
		int* ip=NULL;		// 器牢磐 函荐 急攫
		
		ip=&a;		// 林家 历厘
		*ip=10;
	 	printf("%d %d %d %d\n", a, b, c, *ip); 

		ip=&b;		// 林家 历厘
		*ip=20;
		printf("%d %d %d %d\n", a, b, c, *ip); 
			
		ip=&c;		// 林家 历厘
		*ip=30;
		printf("%d %d %d %d\n", a, b, c, *ip); 
			
		return 0;
} */