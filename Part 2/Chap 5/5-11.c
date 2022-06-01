// 5-11.c
#include <stdio.h>
	
int main(int argc, char* argv[ ])
{
		int i=0;
		printf("문자열의 수 : %d \n", argc); //launch.json에 args 변경
		
		for(i=0; i<argc; i++)
		{
			printf("%d번째 문자열 : %s \n", i, argv[i]);
		}
		
		return 0;
}
