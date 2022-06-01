#include <stdio.h>
#include <stdlib.h>

int main(void){
	char inputS[80];
	int result=0;

	printf("문자열을 입력하세요: ");
	gets(inputS);

	//문자열을 정수로 변환
	result = atoi(inputS);
	printf("문자열을 정수로 출력: %d\n", result);

	return 0;
}

/*해설
입력받은 문자열의 숫자를 정수형 데이터 형태로 반환하는 표준 함수 atoi()함수를 사용합니다.
*/