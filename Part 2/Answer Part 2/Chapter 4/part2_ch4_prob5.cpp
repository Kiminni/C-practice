#include <stdio.h>

int main () 
{
	char *string[2] = {"I Love C", "Hello World"};

	// "Hello World" 문자열을 6번째 문자인 W부터 출력하도록 조정
	printf("%s %s \n", string[0], string[1]+6);
		
	return 0;
}