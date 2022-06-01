// 3-12.c 
#include <stdio.h>
int main( )
{
		int num=10;
		int* ip=NULL;
		int** ipp=NULL;
		
		ip=&num;
		ipp=&ip;
		
		printf("%x %x %x \n", &num, &ip, &ipp);
		printf("%x %x %x \n", &num+1, &ip+1, &ipp+1);
			
		printf("%d %x %x \n", num, ip, ipp);
		printf("%d %x %x \n", num+1, ip+1, ipp+1);
			
		return 0;
}

