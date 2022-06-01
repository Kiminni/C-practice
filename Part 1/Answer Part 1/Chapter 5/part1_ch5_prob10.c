#include <stdio.h>
#define FEET 0.3048

int main() {
	int feet;
	int result;

	printf("FEET  : ");
	scanf("%d", &feet);

	result = feet * FEET;

	printf("%d m\n", result);

	return 0;
}

/*

1피트의 값을 미리 정의해두고 입력 값에 따라 몇 미터인지 출력합니다.

*/