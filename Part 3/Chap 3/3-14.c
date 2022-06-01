/* 3-14.c 
#include <stdio.h>
int main(void)
{
		FILE* stream;
		long distance;
		
		stream=fopen("ftell.txt", "w");				// 쓰기 모드
		fputs("ABCDEFGHIJ", stream);
		fclose(stream);
		
		stream=fopen("ftell.txt", "r");				// 읽기 모드
		
		fseek(stream, -8, SEEK_END);
		fprintf(stdout, "%c \n", fgetc(stream));	// C 출력
		
		distance=ftell(stream);
		printf("거리 : %ld \n", distance);			// 거리 3
		fclose(stream);
			
		return 0;
} 

*/