// 3-1.c 
#include<stdio.h>
int main(void)
{
	char ch=0;
	while( ch != EOF) // EOF == -1      
	{
		ch=getchar();
		putchar(ch);
	}

	return 0;
}
