/* 2-16.c*/ 
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  	int i=0;
	puts("10개의 난수를 발생시킵니다.");

	while(i<10)
	{
		printf("%d \t", rand());
		i=i+1;
	}

	return 0;
} 
