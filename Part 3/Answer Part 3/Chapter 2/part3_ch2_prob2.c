#include <stdio.h>
#include <string.h>

int main(){
	char inputStr[10][15], temp[15];
	int i=0, j=0, max;

	printf("입력을 종료하려면 그냥 엔터를 누르세요.\n");

	//입력
	for(i=0;i<10;i++){
		printf("%d번째? ",i+1);
		gets(temp);
		
		//문자열 길이 점검
		if(strlen(temp)==0){
			max = i;
			break;
		}

		strcpy(inputStr[i], temp);
	}

	//정렬
	for(i=max; i>=0; i--){
		for(j=max; j>i; j--){
			if( strcmp(inputStr[i], inputStr[j]) > 0 ){
				strcpy(temp, inputStr[i]);
				strcpy(inputStr[i], inputStr[j]);
				strcpy(inputStr[j], temp);
			}
		}
	}


	//출력
	for(i=0;i<max;i++){
		printf("%s  ", inputStr[i]);
	}
	puts("");
	return 0;
}

/*해설
문자혈 배열 temp로 입력을 받고, strlen()함수로 입력받은 문자열의 길이를 점검하여 길이가 0이면 입력을 중단한다.
문자열을 입력 받을 때 마다 inputStr 2차원 배열에 순서대로 저장을 한다.

입력이 모두 끝나면 inputStr배열을 내림차순으로 정렬을 한다.
정렬기법으로는 거품정렬을 사용하였다.

정렬이 끝나면 순서대로 문자열을 출력한 후 종료한다.
*/