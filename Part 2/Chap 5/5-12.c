//  5-12.c 
#include <stdio.h>
	
int main(int argc, char* argv[ ])
{
		int i=0;
		printf("문자열의 수 : %d \n", argc);
		*(argv[0]) = '4';
		for(i=0; i<argc; i++)
		{
			printf("argv[%d] : %s \n", i, argv[i]);
			
		}
		printf("%p %p %p %p %p\n",&i,&argv[0],&argv[1],&argv[2],&argv[3]);
		return 0;
}
