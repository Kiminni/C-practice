#include <stdio.h>
#include <stdlib.h>

int main(void){
	char fileName[] = "99.txt";
	int i, j;
	FILE* outFile = NULL;


	//출력파일 생성
	printf("출력파일 99.txt 생성\n");
	if( (outFile = fopen(fileName, "wt")) == NULL ){
		exit(-1);
	}

	
	//구구단 파일에 출력
	printf("출력파일 99.txt에 구구단 출력 시작\n");
	for(i = 1; i <= 9; i++){
		for(j = 1; j <= 9 ; j++){
			fprintf(outFile, "%d * %d = %d\n", i, j, i*j);
		}
		fprintf(outFile, "\n");
	}
	printf("출력파일 99.txt에 구구단 출력 완료\n");

	//파일 출력이 끝나고 파일 닫음
	printf("출력파일 99.txt 닫음\n");
	fclose(outFile);
	return 0;
}
/*해설
outFile 파일포인터 변수에 fopen()함수로 출력할 파일을 생성한다.
출력파일 생성시 "wt"옵션으로 생성하여, 텍스트 출력 모드로 생성한다.
구구단을 화면에 출력하는 것과 동일하게 작성하되, fprintf()함수로 파일포인터 outFile에 출력한다.
구구단 출력이 끝난 후 fclose()함수로 파일포인터 outFile을 닫는다.
*/