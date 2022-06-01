// 3-3.c 
#include<stdio.h>
int main(void)
{
	FILE* stream;                      // 파일 스트림 포인터 stream 선언
	int file_state;                    // 파일 종료 위한 상태 체크      

	// stream 생성 / data1.exe 쓰기 모드
	stream = fopen("data1.txt","r");
	if (stream == NULL)
		printf("File open error \n");

	// 파일 닫기(파일 스트림 소멸)
	file_state = fclose(stream);
	if (file_state == EOF)
		puts("File close error");
	
	return 0;
}
