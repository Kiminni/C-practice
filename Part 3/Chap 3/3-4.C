// 3-4.c 
#include <stdio.h>
int main(void)
{
		FILE* stream;
		int file_state;	
		int input=0;
			
			// 파일 스트림 생성과 파일 열기
		stream=fopen("data1.txt", "w");
		if(stream==NULL)
				puts("파일 열기 에러");
			
			puts("데이터 입력");
			while(input != EOF)
			{
				input=fgetc(stdin);
				fputc(input, stream);
			}
			
			// 파일 닫기(파일 스트림 소멸)
			file_state=fclose(stream);
			if(file_state==EOF)
				puts("파일 닫기 에러");
			
			return 0;
}

