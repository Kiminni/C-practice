/* 3-12.c 
#include<stdio.h>
struct score
{
	char name[20];
	double kor, eng, total;
};
typedef struct score STUDENT;

int main(void)
{
	STUDENT s, ss;	
	FILE* stream;
	
	printf("1. 이름 입력: ");
	fscanf(stdin,"%s",s.name);

	printf("2. 국어 점수, 영어 점수 입력: ");
	fscanf(stdin,"%lf %lf",&s.kor, &s.eng);
	s.total=s.kor+s.eng;

	stream = fopen("student.dat","wb");     // 바이너리 모드, 쓰기 모드
	fwrite(&s, sizeof(s),1,stream);         // 파일(student.dat)에 출력
	fclose(stream);

	stream = fopen("student.dat","rb");     // 바이너리 모드, 읽기 모드
	fread(&ss,sizeof(s),1,stream);           // 파일(stduent.dat)로 부터 입력
    fprintf(stdout,"%s %.2lf %.2lf %.2lf \n",ss.name, ss.kor, ss.eng, ss.total);
	fclose(stream);

    return 0;
}*/
