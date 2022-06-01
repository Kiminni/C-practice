#include <stdio.h>
int Alpha(char x);

int main(void) {
	char ch;
	int result;

	printf("알파벳을 입력하세요 : ");
	scanf("%c", &ch);
	result = Alpha(ch);
	printf("입력한 %c는 알파벳 순서로 %d번째 문자입니다. \n", ch, result);

	return 0;
}

int Alpha(char x) {
	int num;
	
	if(x >= 65 && x <= 90) {
		num = x - 64;
		return num;
	}
	else {
		num = x - 96;
		return num;
	}
}

/*

char형의 변수는 int형으로 자동 캐스팅될 수 있으며, 각각의 문자는 고유의 키값을 가지고 있습니다.
이를 아스키 코드라고 하며, Alpha함수가 if-else문을 이용하여 분기되어 있는 것은 대소문자에 모두 대응하기 위해서입니다.
현재 위 코드는 알파벳 이외의 기호나 숫자를 입력했을 때도 대응하므로 else 대신 else if를 사용하여 조건을 추가해줄 필요가 있으나,
문제의 의도는 함수를 이해하는 데 있으므로 간단히 else로만 처리하도록 합니다.

*/