#include<stdio.h>
#include<string.h>

int main(void){
	char inputStr[80], result[80];

	printf("문자열을 입력하세요 :\t");
	gets(inputStr);
	
	strcpy(result, inputStr);
	strrev(result);

	printf("앞뒤가 뒤집어진 출력 :\t%s\n", result);

	return 0;
}

/*해설
문자열을 앞뒤로 뒤집는 문제이다.
inputStr배열로 문자열을 입력받는다.
문자열을 뒤집는 표준 문자열 처리함수는 strrev()이다.
strrev()함수를 이용하여 문자열을 뒤집은 후 출력한다.
*/