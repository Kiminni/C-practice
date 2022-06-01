#include <stdio.h>

int main() {
	int a;
	int result;
	int result1;
	int result2;
	int result3;
	int final;


	printf("0000과 1111사이의 2진수를 입력하시오 : ");
	scanf("%d", &a);
	
	result = (a / 1000) * 8;
	result1 = ((a % 1000) / 100) * 4;
	result2 = ((a % 100) / 10) * 2;
	result3 = (a % 10) * 1;

	final = result + result1 + result2 + result3;

	printf("이진수 %d를 10진수로 바꾸면 %d입니다.\n", a, final);

	return 0;
}

/*

이진수값이 입력되었다고 가정하고 이를 십진수로 계산합니다.
각 자리수를 저장하기 위한 result, result1, result2, result3으로 저장하고 최종값을 final로 저장합니다.
이진수값이 입력되지 않았을 때의 경우에 대한 유효성 검사는 포함되지 않은 소스 코드입니다.

*/