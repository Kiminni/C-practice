/* 3-7.c 
#include<stdio.h>
int main(void)
{
	FILE* stream;
	char name[20];
	int  kor, eng, total;

    printf("1. 이름 입력: ");
	fscanf(stdin,"%s",name);							// 키보드로부터 데이터를 입력
	
	printf("2. 국어 점수, 영어 점수 입력: ");
	fscanf(stdin,"%d %d",&kor, &eng);              // 키보드로부터 데이터를 입력
	total = kor + eng;
	                      
	stream = fopen("data4.txt","w");                 
	fprintf(stream,"%s %d %d %d \n", name, kor, eng, total);   // data4.txt에 출력
	//fprintf(stdout,"%s %d %d %d \n", name, kor, eng, total); // 모니터에 출력
	fclose(stream);                                          

	return 0;
}
*/