/*  3-3.c
#include <stdio.h>
int main( )
{
		char c='A';
		char* cp=NULL;		
			
		cp=&c;			// 林家 历厘
		
		printf("%x %c %c\n", &c, c, *&c);
		printf("%x %x %x\n", &cp, cp, *&cp);
		
		printf("%c\n", c);		// 流立 立辟
		printf("%c\n", *cp);		// 埃立 立辟
			
		return 0;
} 

*/