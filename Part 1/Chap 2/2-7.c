 //2-7.c 
#include<stdio.h>
int main(void)
{
	printf("a를 대문자로 표현하면 %c 입니다. \n", 'A'); //문자 하나 표현, 작은 따옴표
	printf("%s %c 입니다. \n","a를 대문자로 표현하면",'A'); //'문자열' a~면까지, 큰 따옴표
	printf("%s %d %s\n","2곱하기 3은", 2*3,"입니다.");

	return 0;
}
