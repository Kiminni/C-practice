/* 2-17.c 
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  	int i=0;
	puts("10개의 난수를 발생시킵니다.");
	//srand(1); // 정수 값을 1~3까지 변경 시켜 보자. 
	
	while(i<10)
	{
		printf("%d \t", rand());
		i=i+1;
	}
	return 0;
}*/ 
