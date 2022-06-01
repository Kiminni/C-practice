/* 3-5.c 
#include<stdio.h>
int main(void)
{
	FILE* stream1;                      // 읽기 전용 파일 스트림 선언
	FILE* stream2;                      // 쓰기 전용 파일 스트림 선언
	int input=0;

	stream1 = fopen("data1.txt","r");
	stream2 = fopen("data2.txt","w");

    puts("파일로 부터 데이터를 입력");
	while( input != EOF )
	{
	    input = fgetc(stream1);
		fputc(input, stream2);
		fputc(input, stdout);
	}
	
	fclose(stream1);
	fclose(stream2);
	return 0;
}  */