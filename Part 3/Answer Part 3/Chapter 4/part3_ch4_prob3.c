#include <stdio.h>
#include <stdlib.h>
void main () 
{
	int i, j;
	int* ip = NULL;
	char* cp = NULL;
	float* fp = NULL;

	printf("필요한 메모리 공간 : ");
	scanf("%d", &i);
	printf("저장 데이터 유형 (1)int, (2)char, (3)float : ");
	scanf("%d", &j);

	if (j == 1) {
		//ip = (int*) malloc(i*sizeof(int));
		ip = (int*) calloc(i, sizeof(int));
		printf("메모리 시작 주소 : %d \n", ip);
		printf("할당된 전체 메모리 공간 : %d바이트\n", i*sizeof(int));
	}
	else if (j == 2) {
		//cp = (char*) malloc(i*sizeof(char));
		cp = (char*) calloc(i, sizeof(char));
		printf("메모리 시작 주소 : %d \n", cp);
		printf("할당된 전체 메모리 공간 : %d바이트\n", i*sizeof(char));
	}
	else if (j == 3) {
		//fp = (float*) calloc(i*sizeof(float));
		fp = (float*) calloc(i, sizeof(float));
		printf("메모리 시작 주소 : %d \n", fp);
		printf("할당된 전체 메모리 공간 : %d바이트\n", i*sizeof(float));
	}
	else
		printf("잘못된 입력 \n");
}