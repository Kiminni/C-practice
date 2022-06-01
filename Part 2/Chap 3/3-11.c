// 3-11.c 
#include <stdio.h>
int main( )
{
		char c='A';
		char* cp=NULL;
		char** cpp=NULL;
		
		cp=&c;
		cpp=&cp;
		
		printf("%x %d %d \n", &c, &cp, &cpp);
		printf("%x %d %d \n", &c+1, &cp+1, &cpp+1);
		
		printf("%c %x %x \n", c, cp, cpp);
		printf("%c %x %x \n", c+1, cp+1, cpp+1);
		
		return 0;
}
