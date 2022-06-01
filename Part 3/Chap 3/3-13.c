/* 3-13.c 
#include <stdio.h>
int main(void)
{
		FILE* stream;
		stream=fopen("seek.txt", "w");			// 쓰기 모드
		fputs("ABCDEFGHIJ", stream);
		fclose(stream);
		
		stream=fopen("seek.txt", "r");				// 읽기 모드
		
		fseek(stream, 0, SEEK_SET);
		fprintf(stdout, "%c \n", fgetc(stream));	// A 출력
		
		fseek(stream, 2, SEEK_SET);
		fprintf(stdout, "%c \n", fgetc(stream));	// C 출력
		
		fseek(stream, -1, SEEK_END);
		fprintf(stdout, "%c \n", fgetc(stream));	// J 출력
		
		fseek(stream, -2, SEEK_CUR);
		fprintf(stdout, "%c \n", fgetc(stream));	// I 출력
		fclose(stream);
		
		return 0;
}*/
